#!/usr/bin/env sh

#ndk-build NDK_MODULE_PATH="../../../../"
./gradlew assembleDebug
adb install -r build/outputs/apk/proj.android-debug.apk
adb shell am start -n org.oxygine.my_awesome_game/org.oxygine.my_awesome_game.MainActivity