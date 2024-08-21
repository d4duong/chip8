#ifndef CHIP8_H
#define CHIP8_H

#include <stdint.h>

#define MEMORY_SIZE 4096
#define NUM_REGISTERS 16
#define STACK_SIZE 16
#define NUM_KEYS 16
#define SCREEN_WIDTH 64
#define SCREEN_HEIGHT 32
#define SCREEN_SIZE SCREEN_WIDTH * SCREEN_HEIGHT
#define FONTSET_SIZE 80

typedef struct {
    uint8_t memory[MEMORY_SIZE];
    uint8_t V[NUM_REGISTERS];
    uint16_t I;
    uint16_t pc;
    uint8_t gfx[SCREEN_SIZE];
    uint8_t delay_timer;
    uint8_t sound_timer;
    uint16_t stack[STACK_SIZE];
    uint8_t sp;
    uint8_t key[NUM_KEYS];
    uint8_t draw_flag;
} CHIP8;

#endif