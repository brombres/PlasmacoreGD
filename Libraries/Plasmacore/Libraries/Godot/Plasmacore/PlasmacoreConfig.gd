class_name PlasmacoreConfig
extends Node

enum DisplayMode { Mode2DX, Mode2D, Mode3D }

@export var display_mode:DisplayMode = DisplayMode.Mode2DX

@export var camera_2d:Camera2D
@export var camera_3d:Camera3D
