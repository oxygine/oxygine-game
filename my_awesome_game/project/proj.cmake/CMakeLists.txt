cmake_minimum_required (VERSION 2.6)
project (MyAwesomeGame)

add_subdirectory(../../../oxygine-framework/ oxygine-framework)
add_definitions(${OXYGINE_DEFINITIONS})
include_directories(${OXYGINE_INCLUDE_DIRS})
link_directories(${OXYGINE_LIBRARY_DIRS})


add_subdirectory(../../../oxygine-sound/ oxygine-sound)
add_definitions(${OXYGINESOUND_DEFINITIONS})
include_directories(${OXYGINESOUND_INCLUDE_DIRS})
link_directories(${OXYGINESOUND_LIBRARY_DIRS})


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SRC ../src)
set(SOURCES 
	${SRC}/Enemy.cpp 
	${SRC}/Game.cpp
	${SRC}/GameMenu.cpp
	${SRC}/GameScene.cpp
	${SRC}/Joystick.cpp
	${SRC}/MainMenuScene.cpp
	${SRC}/MyButton.cpp
	${SRC}/Player.cpp
	${SRC}/Rocket.cpp
	${SRC}/Scene.cpp
	${SRC}/Unit.cpp
	${SRC}/example.cpp
	${SRC}/main.cpp
	${SRC}/res.cpp
	${SRC}/Enemy.h
	${SRC}/Game.h
	${SRC}/GameMenu.h
	${SRC}/GameScene.h
	${SRC}/Joystick.h
	${SRC}/MainMenuScene.h
	${SRC}/MyButton.h
	${SRC}/Player.h
	${SRC}/Rocket.h
	${SRC}/Scene.h
	${SRC}/Unit.h
	${SRC}/example.h
	${SRC}/res.h)

add_executable(MyAwesomeGame ${SOURCES})

if (WIN32) #disable console mode for VC++
	set_target_properties(MyAwesomeGame PROPERTIES WIN32_EXECUTABLE TRUE)
endif(WIN32)

target_link_libraries(MyAwesomeGame ${OXYGINESOUND_LIBS} ${OXYGINE_CORE_LIBS})