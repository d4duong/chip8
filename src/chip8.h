#ifndef CHIP8_H
#define CHIP8_H

#include <stdint.h>

// Define constants
#define MEMORY_SIZE 4096
#define NUM_REGISTERS 16
#define STACK_SIZE 16
#define KEYPAD_SIZE 16
#define DISPLAY_WIDTH 64
#define DISPLAY_HEIGHT 32
#define ROM_START_ADDRESS 0x200

// Define the CHIP-8 system structure
typedef struct {
    uint8_t memory[MEMORY_SIZE];
    uint8_t V[NUM_REGISTERS]; // General purpose registers
    uint16_t I; // Index register
    uint16_t PC; // Program counter
    uint8_t delay_timer;
    uint8_t sound_timer;
    uint16_t stack[STACK_SIZE];
    uint8_t SP; // Stack pointer
    uint8_t keypad[KEYPAD_SIZE];
    uint8_t display[DISPLAY_WIDTH * DISPLAY_HEIGHT];
    uint8_t draw_flag;
} chip8;

//  Function prototypes
void initialise_chip8(chip8 *c8);
void load_rom(chip8 *c8, const char *filename);
void emulate_cycle(chip8 *c8);
void execute_opcode(chip8 *c8, uint16_t opcode);
void update_timers(chip8 *c8);
void draw_screen(chip8 *c8);


#endif