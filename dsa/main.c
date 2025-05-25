// main.c
#include "dsa.h"

#include <stdio.h>
#include <stdlib.h>
int main(void) {

    sll_t *head = sll_node_create(43);
    // sll_node_destroy(head);

    dll_t *head2 = dll_node_create(32);
    // dll_node_destroy(head2);

    ////////////////////////////////////////////////////////////////////////////////
    // MEMORY DEBUGGING - DONT TOUCH
    ////////////////////////////////////////////////////////////////////////////////
    f_debug_memory_init(NULL, NULL, NULL);
    f_debug_mem_print(0);
    f_debug_mem_reset();
    ////////////////////////////////////////////////////////////////////////////////
    return 0;
}
