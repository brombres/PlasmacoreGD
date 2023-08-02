class_name PlasmacoreView3D
extends Node3D

func _ready():
	var assets = $Assets
	if assets: assets.visible = false

	Plasmacore.on_new_scene( 3, self )
