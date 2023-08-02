// REFERENCE
// https://docs.godotengine.org/en/stable/contributing/development/core_and_modules/object_class.html

#ifndef ROGUEGD_H
#define ROGUEGD_H

#ifdef WIN32
	#include <windows.h>
#endif

#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/node.hpp>

#include "Generated/RogueProgram.h"

using namespace godot;

class NativeRogueGD : public RefCounted
{
	GDCLASS( NativeRogueGD, RefCounted );

	protected:
		static void _bind_methods();

	public:
		// PROPERTIES

		// CONSTRUCTOR METHODS
		NativeRogueGD();
		~NativeRogueGD();

    void launch();
    godot::Variant call( godot::Variant name, godot::Variant args );
};

#endif // ROGUEGD_H
