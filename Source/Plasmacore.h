// REFERENCE
// https://docs.godotengine.org/en/stable/contributing/development/core_and_modules/object_class.html

#ifndef PLASMACORE_H
#define PLASMACORE_H

#ifdef WIN32
  #include <windows.h>
#endif

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node3d.hpp>

using namespace godot;

class Plasmacore : public Node
{
	GDCLASS( Plasmacore, Node );

	protected:
		static void _bind_methods();

	public:
		// PROPERTIES
		float         scale = 1.0f;
		Vector3       position;
		Node*         node = nullptr;
		Ref<Material> material;

		// CONSTRUCTOR METHODS
		Plasmacore();
		~Plasmacore();

		// PROPERTY ACCESS METHODS
		Ref<Material> get_material() { return material; }
		void          set_material( Ref<Material> p_material ) { material = p_material; }

		Node* get_node() { return node; }
		void  set_node( Node* p_node ) { node = p_node; }

		Vector3 get_position() { return position; }
		void    set_position( Vector3 p_position ) { position = p_position; }

		float get_scale() { return scale; }
		void  set_scale( float p_scale ) { scale = p_scale; }

		// GENERAL METHODS
		int add_one( int parameter );
};

#endif // PLASMACORE_H