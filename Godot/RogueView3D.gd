class_name RogueView3D
extends Node3D

func _ready():
	var assets = $Assets
	if assets: assets.visible = false

	RogueGD.on_new_scene( 3, self )
