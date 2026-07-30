#include <SDL.h>
<<<<<<< HEAD
#include <filesystem>
=======
>>>>>>> 17a6645c54724e00b7ca154237cec6b8dbf0490a
#include "Game.h"

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

<<<<<<< HEAD
    // EXEをどこから起動しても、assetsをEXE横から読めるようにする。
    char* basePath = SDL_GetBasePath();
    if (basePath != nullptr) {
        std::error_code error;
        std::filesystem::current_path(basePath, error);
        SDL_free(basePath);
    }

=======
>>>>>>> 17a6645c54724e00b7ca154237cec6b8dbf0490a
    return runGame();
}
