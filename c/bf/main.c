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

int buffer[MAX_BUFFER];

void reset_buffer(void) { memset(buffer, 0, MAX_BUFFER); }

void print_buffer(void) {
    size_t i;
    for (i = 0; i < MAX_BUFFER; i++) {
        printf("%d ", buffer[i]);
    }
    putchar('\n');
}

void run_instr(char *str, size_t length) {
    size_t pointer;
    size_t i;
    for (i = pointer = 0; i < length; i++) {
        if (str[i] == GREATER_THAN) {
            pointer++;
        } else if (str[i] == LESS_THAN) {
            pointer--;
        } else if (str[i] == PLUS) {
            buffer[pointer]++;
        } else if (str[i] == MINUS) {
            buffer[pointer]--;
        } else if (str[i] == DOT) {
            printf("%c\n", buffer[pointer]);
        } else if (str[i] == COMMA) {
            buffer[pointer] = str[++i];
        } else if (str[i] == OPEN_BRACKET) {
            if (buffer[pointer] == 0) {
                while (str[i] != CLOSE_BRACKET) {
                    i++;
                }
            }
        } else if (str[i] == CLOSE_BRACKET) {
            if (buffer[pointer] != 0) {
                while (str[i] != OPEN_BRACKET) {
                    i--;
                }
            }
        } else {
            continue;
        }
    }
}

void test_add_two_values(void) {
    char *str = "[->+<]";
    size_t length = strlen(str);
    run_instr(str, length);
}

void test_hello_world(void) {
    char *str = "++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++"
                "++..+++.>>.<-.<.+++.------.--------.>>+.>++.";
    size_t length = strlen(str);
    run_instr(str, length);
}

int main(int argc, char **argv) {
    (void)argc;
    (void)argv;

    reset_buffer();
    // print_buffer();
    test_add_two_values();
    print_buffer();
    reset_buffer();
    test_hello_world();
    print_buffer();

    // printf("%u\n", MAX_BUFFER);
    // printf("%zu\n", MAX_BUFFER * sizeof(*buffer));

    // puts("HELLO");

    /******************************************************************************/
    /*                      MEMORY DEBUGGING - DO NOT TOUCH */
    /******************************************************************************/
    f_debug_memory_init(NULL, NULL, NULL);
    f_debug_mem_print(0);
    f_debug_mem_reset();

    return 0;
}
