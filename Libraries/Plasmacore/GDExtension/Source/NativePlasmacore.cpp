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

void NativePlasmacore::on_new_scene( int mode, Node* root, Node* config )
{
  if (Engine::get_singleton()->is_editor_hint()) return;
	PlasmacorePlasmacore__on_new_scene__RogueInt32_PlasmacoreGDNode_PlasmacoreGDNode(
      ROGUE_SINGLETON(PlasmacorePlasmacore),
      mode,
      ROGUE_COMPOUND(PlasmacoreGDNode){root},
      ROGUE_COMPOUND(PlasmacoreGDNode){config}
  );
}

void NativePlasmacore::on_update( double dt, Vector2 display_size )
{
  if ( !Engine::get_singleton()->is_editor_hint() )
  {
    GeometryXY size = ROGUE_COMPOUND(GeometryXY){ (RogueInt32)display_size.x, (RogueInt32)display_size.y };
    PlasmacorePlasmacore__on_update__RogueReal64_GeometryXY( ROGUE_SINGLETON(PlasmacorePlasmacore), dt, size );
    Rogue_check_gc();
  }
}

void NativePlasmacore::_bind_methods()
{
	ClassDB::bind_method( D_METHOD("launch" ),                                 &NativePlasmacore::launch );
	ClassDB::bind_method( D_METHOD("on_new_scene", "mode", "root", "config" ), &NativePlasmacore::on_new_scene );
	ClassDB::bind_method( D_METHOD("on_update", "dt", "display_size" ),        &NativePlasmacore::on_update );
}
