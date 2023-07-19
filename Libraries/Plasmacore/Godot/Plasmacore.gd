extends Node

@onready var plasmacore:NativePlasmacore = NativePlasmacore.new()

func _ready():
	plasmacore.launch()

func _process(delta):
	var display_size = get_viewport().get_visible_rect().size
	plasmacore.on_update(delta,display_size)

func on_new_scene_2dx( config:Node3D ):
	plasmacore.on_new_scene_2dx( $/root, config )
