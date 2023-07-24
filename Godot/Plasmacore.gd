extends Control

@onready var plasmacore:NativePlasmacore = NativePlasmacore.new()

func _ready():
	plasmacore.launch()

func _draw():
	plasmacore.call( "Plasmacore.draw" )

func _process(delta):
	var display_size = get_viewport().get_visible_rect().size
	plasmacore.call( "Plasmacore.update", [delta,display_size] )
	queue_redraw()

func on_new_scene( mode:int, config:Node ):
	plasmacore.call( "Plasmacore.begin_new_scene", [mode,$/root,self,config] )
