class_name Plasmacore2D
extends Node2D

func _ready():
	var assets = $Assets
	if assets: assets.visible = false

	Plasmacore.on_new_scene( 2, self )
