class_name PlasmacoreScene2DX
extends Node3D

## Optional Camera3D. If no camera is linked then Plasmacore will create a 3D camera at runtime.
@export var camera:Camera3D

## Smaller nominal_z values exaggerate the effects of rotating into or moving along the Z axis
## while larger nominal_z values reduce the apparent depth of the 3D effect.
@export var nominal_z:float = 2000

func _ready():
	var assets = $Assets
	if assets: assets.visible = false

	if not camera:
		camera = Camera3D.new()
		add_child( camera )

	Plasmacore.on_new_scene()

