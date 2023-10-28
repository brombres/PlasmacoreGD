@tool
extends Node

@onready var rogue:NativeRogueGD = NativeRogueGD.new()

func _ready():
	rogue.launch()
	rogue.call( "RogueGD.configure", self )

func _process(delta):
	rogue.check_gc()
	rogue.call( "RogueGD.update", [self,delta] )

func send( message_name, args=[] ):
	return rogue.call( message_name, args )

