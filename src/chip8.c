#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <SDL2/SDL.h>

#include "chip8.h"


// Function definitions
bool initialise_SDL(display *sdl) {
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER) != 0) {
        SDL_Log("SDL initialisation failed: %s\n", SDL_GetError());
        return false;
    }
    return true;
}

void initialise_chip8(chip8 *c8) {
    // Initialize registers, memory, screen, stack, etc.
}

void load_rom(chip8 *c8, const char *filename) {
    // Load the ROM file into memory starting at address 0x200
}

void emulate_cycle(chip8 *c8) {
    // Fetch, decode, and execute one opcode
    // Update program counter (pc) and other registers accordingly
}

void execute_opcode(chip8 *c8, uint16_t opcode) {
    // Decode and execute the fetched opcode
}

void update_timers(chip8 *c8) {
    // Decrement the delay and sound timers if they are non-zero
}

void draw_screen(chip8 *c8) {
    // Draw the screen buffer to the SDL window
}

void handle_input(SDL_Event *event) {
    // Update the state of the keys based on user input
}

void cleanup() {
    // Declare and initialize the 'window' variable
    SDL_Window *window = SDL_GetWindowFromID(0);
    // Destroy the SDL window and quit SDL
    SDL_DestroyWindow(window);
    // Shut down intialised SDL subsystems
    SDL_Quit();
}
