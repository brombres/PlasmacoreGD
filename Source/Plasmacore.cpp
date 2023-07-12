#include "Plasmacore.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

Plasmacore::Plasmacore()
{
}

Plasmacore::~Plasmacore()
{
}

Vector2 Plasmacore::get_example_property()
{
  return example_property;
}

void Plasmacore::set_example_property( Vector2 value )
{
  example_property = value;
}

int Plasmacore::example_method( int parameter )
{
  return parameter + 1;
}

void Plasmacore::_bind_methods()
{
  ClassDB::bind_method( D_METHOD("get_example_property" ),         &Plasmacore::get_example_property );
  ClassDB::bind_method( D_METHOD("set_example_property", "value"), &Plasmacore::set_example_property );
  ClassDB::bind_method( D_METHOD("example_method", "parameter"),   &Plasmacore::example_method, DEFVAL(1) );
  ADD_PROPERTY( PropertyInfo(Variant::VECTOR2,"example_property"), "set_example_property", "get_example_property" );
}