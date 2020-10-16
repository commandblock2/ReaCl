# Reacl 

## Intro
Currently an attemp to make a clone of the game Reassembly.

## Libraries
System libs:
| Library Name  | Usage |
| :-: | :-: |
| SFML | Rendering | 
| Boost | Generic |

Libs with submodules:

| Library Name  | Usage |
| :-: | :-: |
| Box2d | Physical emu | 

## Build Instruction
A C++17 compiler is required.

On Windows, it is recommend to use `vcpkg` to install required system libs. Here is a example of installing for x64-windows

    vcpkg install sfml:x64-windows boost:x64-windows

On *nix using your favorite package manager to install SFML/Boost dev packages.

Then clone the repository using 

    git clone --recurse-submodules https://github.com/commandblock2/ReaCl Reacl

Then build it with cmake

    cd Reacl
    cmake ..
    make -j #with your core nums + 1