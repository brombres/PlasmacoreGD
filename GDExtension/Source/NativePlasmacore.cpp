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

godot::Variant NativePlasmacore::call( godot::Variant name, godot::Variant args )
{
  if (Engine::get_singleton()->is_editor_hint()) return godot::Variant();

  return PlasmacorePlasmacore__on_message__GDVariant_GDVariant(
      ROGUE_SINGLETON(PlasmacorePlasmacore),
      ROGUE_COMPOUND(GDVariant){name},
      ROGUE_COMPOUND(GDVariant){args}
  ).value;
}

void NativePlasmacore::_bind_methods()
{
	ClassDB::bind_method( D_METHOD("launch"), &NativePlasmacore::launch );
	ClassDB::bind_method( D_METHOD("call"),   &NativePlasmacore::call, DEFVAL(nullptr) );
}
