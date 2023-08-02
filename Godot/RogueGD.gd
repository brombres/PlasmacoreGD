extends Control

@onready var plasmacore:NativeRogueGD = NativeRogueGD.new()

func _ready():
	plasmacore.launch()

func _draw():
	plasmacore.call( "RogueGD.draw" )

func _process(delta):
	var display_size = get_viewport().get_visible_rect().size
	plasmacore.call( "RogueGD.update", [delta,display_size]  )
	queue_redraw()

func on_new_scene( mode:int, config:Node ):
	plasmacore.call( "RogueGD.begin_new_scene", [mode,$/root,self,config] )

func send( message_name, args=[] ):
	plasmacore.call( message_name, args )

