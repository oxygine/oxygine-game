LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := main

#SDK_ROOT points to folder with SDL and oxygine-framework
LOCAL_SRC_FILES := ../../../../..//SDL/src/main/android/SDL_android_main.c

src := ../../../src

LOCAL_SRC_FILES += $(src)/Enemy.cpp\
	$(src)/Game.cpp\
	$(src)/GameMenu.cpp\
	$(src)/GameScene.cpp\
	$(src)/Joystick.cpp\
	$(src)/MainMenuScene.cpp\
	$(src)/MyButton.cpp\
	$(src)/Player.cpp\
	$(src)/Rocket.cpp\
	$(src)/MyScene.cpp\
	$(src)/Unit.cpp\
	$(src)/example.cpp\
	$(src)/main.cpp\
	$(src)/res.cpp\


LOCAL_STATIC_LIBRARIES := oxygine-flow_static oxygine-sound_static oxygine-framework_static
LOCAL_SHARED_LIBRARIES := SDL2

include $(BUILD_SHARED_LIBRARY)


#import from NDK_MODULE_PATH defined in build.cmd
$(call import-module, oxygine-framework)
$(call import-module, oxygine-sound)
$(call import-module, oxygine-flow)
