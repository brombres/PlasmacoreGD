extends Node

@onready var plasmacore:NativePlasmacore = NativePlasmacore.new()

func _ready():
	plasmacore.launch()

func _process(delta):
	plasmacore.on_update(delta)

func on_new_scene():
	plasmacore.on_new_scene( $/root )
