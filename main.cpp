#include <SDL.h>
#include <filesystem>
#include "Game.h"

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    // EXEをどこから起動しても、assetsをEXE横から読めるようにする。
    char* basePath = SDL_GetBasePath();
    if (basePath != nullptr) {
        std::error_code error;
        std::filesystem::current_path(basePath, error);
        SDL_free(basePath);
    }

    return runGame();
}
