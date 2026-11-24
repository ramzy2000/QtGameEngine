cmake_minimum_required(VERSION 3.19)
include(FetchContent)
project(QtGameEngine LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets OpenGLWidgets)

# get external libs
FetchContent_Declare(
    entt
    GIT_REPOSITORY https://github.com/skypjack/entt.git
    GIT_TAG        v4.0.0 # release-1.10.0
)

FetchContent_MakeAvailable(entt)

qt_standard_project_setup()

qt_add_executable(QtGameEngine
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    gamewindow.h gamewindow.cpp
    entitymanager.h entitymanager.cpp
    scene/Scene.h
    scene/TestScene.h scene/TestScene.cpp
    scenemanager.h scenemanager.cpp
    logger.h logger.cpp
    loggerwidget.h loggerwidget.cpp
    component/Position.h
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(QtGameEngine
    PRIVATE
        Qt::Core
        Qt::Widgets
        Qt::OpenGLWidgets
        EnTT::EnTT
)

install(TARGETS QtGameEngine
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET QtGameEngine
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
