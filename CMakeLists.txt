cmake_minimum_required(VERSION 3.16)
project(Maze3D LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL2 REQUIRED sdl2)
pkg_check_modules(SDL2_IMAGE REQUIRED SDL2_image)
pkg_check_modules(SDL2_TTF REQUIRED SDL2_ttf)
pkg_check_modules(SDL2_MIXER REQUIRED SDL2_mixer)

add_executable(maze3d
    main.cpp
    src/Game.cpp
)

target_include_directories(maze3d PRIVATE
    include
    ${SDL2_INCLUDE_DIRS}
    ${SDL2_IMAGE_INCLUDE_DIRS}
    ${SDL2_TTF_INCLUDE_DIRS}
    ${SDL2_MIXER_INCLUDE_DIRS}
)

target_compile_options(maze3d PRIVATE
    ${SDL2_CFLAGS_OTHER}
    ${SDL2_IMAGE_CFLAGS_OTHER}
    ${SDL2_TTF_CFLAGS_OTHER}
    ${SDL2_MIXER_CFLAGS_OTHER}
)

if(WIN32)
    # MSYS2's sdl2.pc adds SDL2main automatically. This project uses a normal
    # C++ main(), so SDL2main must not be linked on Windows.
    target_compile_definitions(maze3d PRIVATE SDL_MAIN_HANDLED)
    target_link_directories(maze3d PRIVATE
        ${SDL2_LIBRARY_DIRS}
        ${SDL2_IMAGE_LIBRARY_DIRS}
        ${SDL2_TTF_LIBRARY_DIRS}
        ${SDL2_MIXER_LIBRARY_DIRS}
    )
    target_link_libraries(maze3d PRIVATE
        SDL2_image
        SDL2_ttf
        SDL2_mixer
        SDL2
    )
else()
    target_link_directories(maze3d PRIVATE
        ${SDL2_LIBRARY_DIRS}
        ${SDL2_IMAGE_LIBRARY_DIRS}
        ${SDL2_TTF_LIBRARY_DIRS}
        ${SDL2_MIXER_LIBRARY_DIRS}
    )
    target_link_libraries(maze3d PRIVATE
        ${SDL2_LIBRARIES}
        ${SDL2_IMAGE_LIBRARIES}
        ${SDL2_TTF_LIBRARIES}
        ${SDL2_MIXER_LIBRARIES}
    )
endif()
