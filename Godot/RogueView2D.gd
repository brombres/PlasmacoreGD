extends Control

func _ready():
	RogueGD.send( name+".configure", [self,RogueGD.MODE_2D] )

func _draw():
	RogueGD.send( name+".draw", self )

func _process(delta):
	RogueGD.send( name+".update", [self,delta] )

#queue_redraw()
