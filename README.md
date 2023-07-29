# PlasmacoreGD
A Rogue-based game framework implemented as a Godot extension

# Status and Usage
This framework is under active and rapid development, with frequent sweeping changes.

Here are some kludgey steps to configure a new project to use PlasmacoreGD:

1. Install Rogue and Rogo by installing [Morlock](https://morlock.sh).

2. Create a new project folder.

3. Create folder `Libraries/` and clone `PlasmacoreGD` as `Libraries/Plasmacore`.

4. Copy `Libraries/Plasmacore/BuildPlasmacore.rogue` to the base folder.

5. Create an empty (at least) main Rogue file: `Source/Main.rogue`.

6. Create a new Godot 4 project subfolder called `GodotProject`.

7. Run `rogo` in the base folder to recompile the Rogue native library, copy it to `GodotProject`, and auto-launch Godot, opening `GodotProject`.

8. HMU on at [@brombres](https://x.com/brombres) if you make it that far and are interested in next steps!
