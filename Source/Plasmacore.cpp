#include "Plasmacore.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

Plasmacore::Plasmacore()
{
}

Plasmacore::~Plasmacore()
{
}

int Plasmacore::add_one( int parameter )
{
	return parameter + 1;
}

void Plasmacore::_bind_methods()
{
	ClassDB::bind_method( D_METHOD("get_material" ),         &Plasmacore::get_node );
	ClassDB::bind_method( D_METHOD("get_node" ),             &Plasmacore::get_node );
	ClassDB::bind_method( D_METHOD("get_position" ),         &Plasmacore::get_position );
	ClassDB::bind_method( D_METHOD("get_scale" ),            &Plasmacore::get_scale );
	ClassDB::bind_method( D_METHOD("set_node", "value"),     &Plasmacore::set_node );
	ClassDB::bind_method( D_METHOD("set_material", "value"), &Plasmacore::set_material );
	ClassDB::bind_method( D_METHOD("set_position", "value"), &Plasmacore::set_position );
	ClassDB::bind_method( D_METHOD("set_scale", "value"),    &Plasmacore::set_scale );
	ClassDB::bind_method( D_METHOD("add_one", "parameter"),  &Plasmacore::add_one, DEFVAL(1) );
	ADD_PROPERTY( PropertyInfo(Variant::OBJECT,  "material", PROPERTY_HINT_RESOURCE_TYPE, "Material"), "set_material", "get_material");
	ADD_PROPERTY( PropertyInfo(Variant::OBJECT,  "node",     PROPERTY_HINT_RESOURCE_TYPE, "Node"), "set_node", "get_node");
	ADD_PROPERTY( PropertyInfo(Variant::VECTOR3, "position"), "set_position", "get_position");
	ADD_PROPERTY( PropertyInfo(Variant::FLOAT,   "scale",    PROPERTY_HINT_RANGE, "0.0,1.0,0.05,or_less,or_greater"), "set_scale", "get_scale");
}