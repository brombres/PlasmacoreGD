class_name PlasmacoreConfig
extends Node

enum DisplayMode { Mode2DX, Mode2D, Mode3D }

@export var display_mode:DisplayMode = DisplayMode.Mode2DX

@export var camera_2d:Camera2D
@export var camera_3d:Camera3D

func _ready():
    var root = $/root
    print(root)
    var n = root.get_child_count()
    for i in range(n):
        var node:Node = root.get_child( i )
        print(node.name)