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
    # スペースを作成する
    space = h_mod.add_space("{}_space".format(element.name), space_type=unreal.RigSpaceType.SPACE)

    # コントロールを作成する
    control = h_mod.add_control("{}_ctrl".format(element.name), space_name=space.name,gizmo_name = 'Box_Thick',gizmo_color = [1.0, 0.0, 0.0, 1.0] )

    # スペースにボーンの初期トランスフォームを適用する
    bone_initial_transform = h_mod.get_initial_transform(element)
    h_mod.set_initial_transform(space, bone_initial_transform)

    # parent変数が空でない場合、ペアレントする(階層を作る部分)
    if parent is not None:
        h_mod.reparent_element(space, parent)
    parent = space