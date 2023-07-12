#include "Plasmacore.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

Plasmacore::Plasmacore()
{
}

Plasmacore::~Plasmacore()
{
}

Camera3D* Plasmacore::get_camera()
{
	 // Result can be 'nullptr'.
	 return Object::cast_to<Camera3D>( ObjectDB::get_instance(camera) );
}

void Plasmacore::set_camera( Camera3D* p_camera )
{
	camera = p_camera ? p_camera->get_instance_id() : ObjectID();
}

int Plasmacore::add_one( int parameter )
{
	return parameter + 1;
}

void Plasmacore::_bind_methods()
{
	ClassDB::bind_method( D_METHOD("get_material" ),				 &Plasmacore::get_material );
	ClassDB::bind_method( D_METHOD("get_camera" ),					 &Plasmacore::get_camera );
	ClassDB::bind_method( D_METHOD("get_position" ),				 &Plasmacore::get_position );
	ClassDB::bind_method( D_METHOD("get_scale" ),						&Plasmacore::get_scale );
	ClassDB::bind_method( D_METHOD("set_camera", "value"),	 &Plasmacore::set_camera );
	ClassDB::bind_method( D_METHOD("set_material", "value"), &Plasmacore::set_material );
	ClassDB::bind_method( D_METHOD("set_position", "value"), &Plasmacore::set_position );
	ClassDB::bind_method( D_METHOD("set_scale", "value"),		&Plasmacore::set_scale );
	ClassDB::bind_method( D_METHOD("add_one", "parameter"),	&Plasmacore::add_one, DEFVAL(1) );
	ADD_PROPERTY( PropertyInfo(Variant::OBJECT,	"material", PROPERTY_HINT_RESOURCE_TYPE, "Material"), "set_material", "get_material");
	ADD_PROPERTY( PropertyInfo(Variant::OBJECT,	"camera",	 PROPERTY_HINT_NODE_TYPE, "Camera3D"), "set_camera", "get_camera");
	ADD_PROPERTY( PropertyInfo(Variant::VECTOR3, "position"), "set_position", "get_position");
	ADD_PROPERTY( PropertyInfo(Variant::FLOAT,	 "scale",		PROPERTY_HINT_RANGE, "0.0,1.0,0.05,or_less,or_greater"), "set_scale", "get_scale");
}