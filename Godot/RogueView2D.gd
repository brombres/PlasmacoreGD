class_name RogueView2D
extends Node2D

func _ready():
	if is_visible:
		var assets = get_node_or_null("Assets")
		if assets: assets.visible = false

		RogueGD.on_new_scene( 2, self )
		RogueGD.send( name+".init" )

func _draw():
	RogueGD.send( name+".draw" )

func _process(delta):
	RogueGD.send( name+".", [delta] )
