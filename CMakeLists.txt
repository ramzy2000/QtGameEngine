cmake_minimum_required(VERSION 3.19)
project(QtGameEngine LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets OpenGLWidgets)

qt_standard_project_setup()

qt_add_executable(QtGameEngine
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    gamewindow.h gamewindow.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(QtGameEngine
    PRIVATE
        Qt::Core
        Qt::Widgets
        Qt::OpenGLWidgets
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
