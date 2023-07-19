#include "NativePlasmacore.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

NativePlasmacore::NativePlasmacore()
{
}

NativePlasmacore::~NativePlasmacore()
{
}

void NativePlasmacore::launch()
{
  if ( !Engine::get_singleton()->is_editor_hint() )
  {
    Rogue_clean_up();
    Rogue_launch();
  }
}

void NativePlasmacore::on_new_scene_2dx( Node* root, float nominal_z )
{
  if (Engine::get_singleton()->is_editor_hint()) return;
	PlasmacorePlasmacore__on_new_scene_2dx__NativeGDNode_RogueReal64(
      ROGUE_SINGLETON(PlasmacorePlasmacore),
      (NativeGDNode){root},
      nominal_z
  );
}

void NativePlasmacore::on_update( float dt, Vector2 display_size )
{
  if ( !Engine::get_singleton()->is_editor_hint() )
  {
    GeometryXY size = (GeometryXY){ (RogueInt32)display_size.x, (RogueInt32)display_size.y };
    PlasmacorePlasmacore__on_update__RogueReal64_GeometryXY( ROGUE_SINGLETON(PlasmacorePlasmacore), dt, size );
    Rogue_check_gc();
  }
}

//Camera3D* NativePlasmacore::get_camera()
//{
//	 // Result can be 'nullptr'.
//	 return Object::cast_to<Camera3D>( ObjectDB::get_instance(camera) );
//}
//
//void NativePlasmacore::set_camera( Camera3D* p_camera )
//{
//	camera = p_camera ? p_camera->get_instance_id() : ObjectID();
//}
//
//int NativePlasmacore::add_one( int parameter )
//{
//	return parameter + 1;
//}

void NativePlasmacore::_bind_methods()
{
	ClassDB::bind_method( D_METHOD("launch" ),    &NativePlasmacore::launch );
	ClassDB::bind_method( D_METHOD("on_new_scene_2dx", "root", "nominal_z" ), &NativePlasmacore::on_new_scene_2dx );
	ClassDB::bind_method( D_METHOD("on_update", "dt", "display_size" ), &NativePlasmacore::on_update );
	//ClassDB::bind_method( D_METHOD("get_material" ),				 &NativePlasmacore::get_material );
	//ClassDB::bind_method( D_METHOD("get_camera" ),					 &NativePlasmacore::get_camera );
	//ClassDB::bind_method( D_METHOD("get_position" ),				 &NativePlasmacore::get_position );
	//ClassDB::bind_method( D_METHOD("get_scale" ),						&NativePlasmacore::get_scale );
	//ClassDB::bind_method( D_METHOD("set_camera", "value"),	 &NativePlasmacore::set_camera );
	//ClassDB::bind_method( D_METHOD("set_material", "value"), &NativePlasmacore::set_material );
	//ClassDB::bind_method( D_METHOD("set_position", "value"), &NativePlasmacore::set_position );
	//ClassDB::bind_method( D_METHOD("set_scale", "value"),		&NativePlasmacore::set_scale );
	//ClassDB::bind_method( D_METHOD("add_one", "parameter"),	&NativePlasmacore::add_one, DEFVAL(1) );
	//ADD_PROPERTY( PropertyInfo(Variant::OBJECT,	"material", PROPERTY_HINT_RESOURCE_TYPE, "Material"), "set_material", "get_material");
	//ADD_PROPERTY( PropertyInfo(Variant::OBJECT,	"camera",	 PROPERTY_HINT_NODE_TYPE, "Camera3D"), "set_camera", "get_camera");
	//ADD_PROPERTY( PropertyInfo(Variant::VECTOR3, "position"), "set_position", "get_position");
	//ADD_PROPERTY( PropertyInfo(Variant::FLOAT,	 "scale",		PROPERTY_HINT_RANGE, "0.0,1.0,0.05,or_less,or_greater"), "set_scale", "get_scale");
}
