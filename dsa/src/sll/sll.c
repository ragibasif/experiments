// sll.c

#include "../dsa.h"

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
