#!/usr/bin/env sh

mkdir build
cd build

#generate cmake project in the "build" folder
cmake ..

#build it
make

#move to working data folder with resources (from the build folder)
cd ../../../data/

#run executable
./../project/proj.cmake/build/my_awesome_game
