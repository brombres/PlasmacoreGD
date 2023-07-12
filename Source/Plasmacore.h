// REFERENCE
// https://docs.godotengine.org/en/stable/contributing/development/core_and_modules/object_class.html

#ifndef PLASMACORE_H
#define PLASMACORE_H

#ifdef WIN32
	#include <windows.h>
#endif

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/material.hpp>

using namespace godot;

class Plasmacore : public Node
{
	GDCLASS( Plasmacore, Node );

	protected:
		static void _bind_methods();

	public:
		// PROPERTIES
		float				 scale = 1.0f;
		Vector2			 display_size;
		ObjectID			camera;
		Ref<Material> material;

		// CONSTRUCTOR METHODS
		Plasmacore();
		~Plasmacore();

		// PROPERTY ACCESS METHODS
		Ref<Material> get_material() { return material; }
		void					set_material( const Ref<Material> &p_material ) { material = p_material; }

		Camera3D* get_camera();
		void			set_camera( Camera3D* p_camera );

		Vector2 get_position() { return display_size; }
		void		set_position( Vector2 p_position ) { display_size = p_position; }

		float get_scale() { return scale; }
		void	set_scale( float p_scale ) { scale = p_scale; }

		// GENERAL METHODS
		int add_one( int parameter );
};

#endif // PLASMACORE_H
