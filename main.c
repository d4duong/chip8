#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <SDL2/SDL.h>

// Function prototypes
bool initialise_SDL(void);

int main(int argc, char *argv[]) {
    // Initialise SDL
    initialise_SDL();

    // Initialise CHIP-8 system

    while (1) {
        // Fetch opcode

        // Decode and execute opcode

        // Update timers

        // Render graphics

        // Handle input

        // Repeat the main loop
    }

    return 0;
}

bool initialise_SDL(void) {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER) != 0) {
        SDL_Log("SDL initialisation failed: %s\n", SDL_GetError());
        return false;
    }
    return true;
}