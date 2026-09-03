#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

Node* insert(Node **head, const char *value) {
    Node *n = malloc(sizeof(Node));
    n->value = strdup(value);
    n->prev = NULL;
    n->next = *head;
    if (*head) (*head)->prev = n;
    *head = n;
    return n;
}

Node* find(Node *head, const char *value) {
    Node *cur = head;
    while (cur) {
        if (strcmp(cur->value, value) == 0) return cur;
        cur = cur->next;
    }
    return NULL;
}

void delete(Node **head, Node *n) {
    if (!n) return;
    if (n->prev) n->prev->next = n->next;
    else *head = n->next;
    if (n->next) n->next->prev = n->prev;
    free(n->value);
    free(n);
}

void print_list(Node *head) {
    Node *cur = head;
    while (cur) {
        printf("%s ", cur->value);
        cur = cur->next;
    }
    printf("\n");
}
