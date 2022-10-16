# coding: utf-8
import unreal

# 開いているControlRigを取得する
rigs = unreal.ControlRigBlueprint.get_currently_open_rig_blueprints()
rig = rigs[0]

# ControlRigHierarchyModifierを取得する
h_mod = rig.get_hierarchy_modifier()

# 選択エレメントを取得する
elements = h_mod.get_selection()

"""------------------------------------------------
    スペース＆コントロール作成＆階層作成
------------------------------------------------"""
parent=None
for element in elements:

    if parent is not None:
        # 選択中の名前を変更する
        element.rename_element(element, "{}_ctrl".format(parent.name))
    
    parent = element