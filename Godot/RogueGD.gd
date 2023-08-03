extends Control

enum{ MODE_2DX=1, MODE_2D=2, MODE_3D=3 }

@onready var rogue:NativeRogueGD = NativeRogueGD.new()

func _ready():
	rogue.launch()

func _process(delta):
	rogue.call( "RogueGD.update", [self,delta] )

func send( message_name, args=[] ):
	return rogue.call( message_name, args )

