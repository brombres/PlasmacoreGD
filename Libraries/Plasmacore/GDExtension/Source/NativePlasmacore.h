// REFERENCE
// https://docs.godotengine.org/en/stable/contributing/development/core_and_modules/object_class.html

#ifndef PLASMACORE_H
#define PLASMACORE_H

#ifdef WIN32
	#include <windows.h>
#endif

#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/material.hpp>

#include "Generated/RogueProgram.h"

using namespace godot;

class NativePlasmacore : public RefCounted
{
	GDCLASS( NativePlasmacore, RefCounted );

	protected:
		static void _bind_methods();

	public:
		// PROPERTIES

		// CONSTRUCTOR METHODS
		NativePlasmacore();
		~NativePlasmacore();

    void launch();
		void on_new_scene( int mode, Node* root, Node* config );
    void on_update( double dt, Vector2 display_size );
};

#endif // PLASMACORE_H
