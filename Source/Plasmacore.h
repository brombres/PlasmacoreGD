#ifndef PLASMACORE_H
#define PLASMACORE_H

#ifdef WIN32
  #include <windows.h>
#endif

#include <godot_cpp/classes/node.hpp>

using namespace godot;

class Plasmacore : public Node
{
  GDCLASS( Plasmacore, Node );

  protected:
    static void _bind_methods();

  public:
    // PROPERTIES
    Vector2 example_property = Vector2(0,0);

    // CONSTRUCTOR METHODS
    Plasmacore();
    ~Plasmacore();

    // PROPERTY ACCESS METHODS
    Vector2 get_example_property();
    void    set_example_property( Vector2 value );

    // GENERAL METHODS
    int example_method( int parameter );
};

#endif // PLASMACORE_H