class_name PlasmacoreView2D
extends Node2D

func _ready():
	if is_visible:
		var assets = get_node_or_null("Assets")
		if assets: assets.visible = false

		Plasmacore.on_new_scene( 2, self )
		print(str("NAME:",name))
