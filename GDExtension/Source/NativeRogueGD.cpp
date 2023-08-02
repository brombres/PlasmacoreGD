#include "NativeRogueGD.h"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

NativeRogueGD::NativeRogueGD()
{
}

NativeRogueGD::~NativeRogueGD()
{
}

void NativeRogueGD::launch()
{
  if ( !Engine::get_singleton()->is_editor_hint() )
  {
    Rogue_clean_up();
    Rogue_launch();
  }
}

godot::Variant NativeRogueGD::call( godot::Variant name, godot::Variant args )
{
  if (Engine::get_singleton()->is_editor_hint()) return godot::Variant();

  return RogueGDRogueGD__on_message__GDVariant_GDVariant(
      ROGUE_SINGLETON(RogueGDRogueGD),
      ROGUE_COMPOUND(GDVariant){name},
      ROGUE_COMPOUND(GDVariant){args}
  ).value;
}

void NativeRogueGD::_bind_methods()
{
	ClassDB::bind_method( D_METHOD("launch"), &NativeRogueGD::launch );
	ClassDB::bind_method( D_METHOD("call"),   &NativeRogueGD::call, DEFVAL(nullptr) );
}
