class_name Plasmacore3D
extends Node2D

func _ready():
	var assets = $Assets
	if assets: assets.visible = false

	Plasmacore.on_new_scene( 3, self )
