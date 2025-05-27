/*
 * File: main.c
 * Author: Ragib Asif
 * Email: ragib.asif30@myhunter.cuny.edu
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 * main
 *
 */

// The eight language commands each consist of a single character:
//
// Character	Instruction Performed

// >	Increment the data pointer by one (to point to the next cell to the
// right).

// <	Decrement the data pointer by one (to point to the next cell to the
// left).

// +	Increment the byte at the data pointer by one.

// -	Decrement the byte at the data pointer by one.

// .	Output the byte at the data pointer.

// ,	Accept one byte of input, storing its value in the byte at the data
// pointer.

// [	If the byte at the data pointer is zero, then instead of moving the
// instruction pointer forward to the next command, jump it forward to the
// command after the matching ] command.

// ]	If the byte at the data pointer is nonzero, then instead of moving the
// instruction pointer forward to the next command, jump it back to the command
// after the matching [ command.[a]

#include "bf.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LESS_THAN '<'
#define GREATER_THAN '>'
#define PLUS '+'
#define MINUS '-'
#define DOT '.'
#define COMMA ','
#define OPEN_BRACKET '['
#define CLOSE_BRACKET ']'

#define MAX_BUFFER 1024

enum token_type {
    POINTER_SHIFT, // >, <
    BYTE_SHIFT,    // +, -
    BYTE_IO,       // .,,
    POINTER_JUMP,  // [,]
    INVALID_TYPE,
};

struct instruction {
    enum token_type instr_type;
    char instr_chr;
};

int buffer[MAX_BUFFER];

struct instruction instr_buffer[MAX_BUFFER];

void reset_buffer(void) { memset(buffer, 0, MAX_BUFFER); }

void print_buffer(void) {
    size_t i;
    for (i = 0; i < MAX_BUFFER; i++) {
        printf("%d ", buffer[i]);
    }
    putchar('\n');
}

void lexer(char *src) {
    size_t length;
    size_t i;
    char c;
    struct instruction token;
    length = strlen(src);
    printf("string: %s\nlength: %zu\n", src, length);
    for (i = 0; i < length; i++) {
        printf("%c\n", src[i]);
        c = src[i];
        if (c == LESS_THAN || c == GREATER_THAN) {
            token.instr_chr = c;
            token.instr_type = POINTER_SHIFT;
        } else if (c == PLUS || c == MINUS) {
            token.instr_chr = c;
            token.instr_type = BYTE_SHIFT;
        } else if (c == DOT || c == COMMA) {
            token.instr_chr = c;
            token.instr_type = BYTE_IO;
        } else if (c == OPEN_BRACKET || c == CLOSE_BRACKET) {
            token.instr_chr = c;
            token.instr_type = POINTER_JUMP;
        } else {
            token.instr_chr = c;
            token.instr_type = INVALID_TYPE;
        }
        instr_buffer[i] = token;
    }
    // for (i = 0; i < length; i++) {
    //     printf("%d\n", instr_buffer[i].instr_type);
    //     printf("%c\n", instr_buffer[i].instr_chr);
    // }
}

void run_instr(void) {}

// TODO: Parser

void test_add_two_values(void) {
    char *str = "[->+<]";
    lexer(str);
}

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    reset_buffer();
    print_buffer();
    test_add_two_values();

    printf("%u\n", MAX_BUFFER);
    printf("%zu\n", MAX_BUFFER * sizeof(*buffer));

    puts("HELLO");

    /******************************************************************************/
    /*                      MEMORY DEBUGGING - DO NOT TOUCH */
    /******************************************************************************/
    f_debug_memory_init(NULL, NULL, NULL);
    f_debug_mem_print(0);
    f_debug_mem_reset();

    return 0;
}
