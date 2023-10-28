@tool
class_name RogueView2D
extends GGComponent

func _ready():
	RogueGD.send( name+".configure", self )

func _draw():
	RogueGD.send( name+".draw", self )

func _process(delta):
	RogueGD.send( name+".update", [self,delta] )
