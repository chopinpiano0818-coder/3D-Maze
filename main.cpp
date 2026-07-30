#include <SDL2/SDL.h>
#include "Game.h"

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;

    SDL_SetMainReady();
    return runGame();
}
