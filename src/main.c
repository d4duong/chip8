#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

#include "chip8.h"

int main(int argc, char *argv[]) {
    (void)argc;
    (void)argv;
    // Initialise SDL
    display sdl = {NULL, NULL};
    if (!initialise_SDL(&sdl)) {
        exit(EXIT_FAILURE);
    }

    // Create an application window with following settings
    SDL_Window *window = SDL_CreateWindow(
        "CHIP-8 Emulator", // Window title
        SDL_WINDOWPOS_CENTERED, // Initial x position
        SDL_WINDOWPOS_CENTERED, // Initial y position
        640, // Width, in pixels
        320, // Height, in pixels
        SDL_WINDOW_SHOWN // Flags
    );

    // Check that the window was successfully created
    if (window == NULL) {
        // In the case that the window could not be made...
        printf("Could not create window: %s\n", SDL_GetError());
        return 1;
    }


    // Initialise CHIP-8 system

    // while (1) {
    //     // Fetch opcode

    //     // Decode and execute opcode

    //     // Update timers

    //     // Render graphics

    //     // Handle input

    //     // Repeat the main loop
    // }

    // Clean up and exit
    cleanup();
    return 0;
}
