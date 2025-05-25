// dll.c

#include "../dsa.h"

typedef struct dll dll_t;

struct dll {
    int data;
    struct dll *next;
    struct dll *prev;
};

dll_t *dll_node_create(const int data) {
    dll_t *head = malloc(sizeof(*head));
    head->data = data;
    head->next = NULL;
    head->prev = NULL;
    return head;
}

void dll_node_destroy(dll_t *head) {
    free(head);
    head = NULL;
}
