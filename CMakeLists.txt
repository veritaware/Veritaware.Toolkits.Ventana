cmake_minimum_required(VERSION 3.20)
project(Ventana)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(module/Veritaware.Toolkits.CWEL)

add_library(Ventana
        src/Base/Visual.cpp
        src/Controls/Window.cpp
)

target_include_directories(Ventana PUBLIC include)
target_include_directories(Ventana PRIVATE module/Veritaware.Toolkits.CWEL/include)

target_compile_features(Ventana
        PUBLIC cxx_auto_type
        PUBLIC cxx_defaulted_functions
)
