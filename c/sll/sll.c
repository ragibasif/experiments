/*
 * File: sll.c
 * Author: Ragib Asif
 * Email: ragib.asif30@myhunter.cuny.edu
 * GitHub: https://github.com/ragibasif
 * LinkedIn: https://www.linkedin.com/in/ragibasif/
 * SPDX-License-Identifier: MIT
 * Copyright (c) 2025 Ragib Asif
 * Version 1.0.0
 *
 * implementation
 *
 */

#include "sll.h"

typedef struct sll sll_t;

struct sll {
    int data;
    struct sll *next;
};

sll_t *sll_node_create(const int data) {
    sll_t *head = malloc(sizeof(*head));
    head->data = data;
    head->next = NULL;
    return head;
}

void sll_node_destroy(sll_t *head) {
    free(head);
    head = NULL;
}
