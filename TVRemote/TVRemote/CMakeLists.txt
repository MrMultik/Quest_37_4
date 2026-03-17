cmake_minimum_required(VERSION 3.19)
project(TVRemote LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(TVRemote
    WIN32 MACOSX_BUNDLE
    main.cpp
    tvremote.cpp
    tvremote.h
    tvremote.ui
)

target_link_libraries(TVRemote
    PRIVATE
        Qt::Core
        Qt::Widgets
)
