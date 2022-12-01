/*
 * Copyright 2019 Soft Gear Co., Ltd. All Rights Reserved.
 *
 * See https://strixengine.com/en/terms-of-use/ for full license details.
 */
#pragma once

#include "HAL/UnrealMemory.h"
#include <memory>

template <typename T>
struct StrixDeleter
{
	void operator()(T* ptr) {
		ptr->~T();
		FMemory::Free(ptr);
	}
};

/**
 * Template class that holds data on heap to handle data between different memory spaces (e.g. dll boundary issues)
 */
template <typename T>
class StrixHeapDataHolder
{
public:
	StrixHeapDataHolder() : m_data(new T()) {}
	StrixHeapDataHolder(const T& data) : m_data(new T(data)) {}
	StrixHeapDataHolder(const StrixHeapDataHolder<T>& rhs) : m_data(new T(*rhs.m_data)) {}
	StrixHeapDataHolder &operator=(const StrixHeapDataHolder<T>& rhs) {
		*m_data = *rhs.m_data;
		return *this;
	}

	const T &Get() const { return *m_data; }
	T &Get() { return *m_data; }

private:
	std::unique_ptr<T, StrixDeleter<T>> m_data;
};
