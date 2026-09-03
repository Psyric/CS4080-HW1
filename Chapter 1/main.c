#include <stddef.h>
#include "list.h"

int main() {
    Node *head = NULL;

    insert(&head, "apple");
    insert(&head, "banana");
    insert(&head, "cherry");

    print_list(head);

    Node *f = find(head, "banana");
    delete(&head, f);

    print_list(head);

    return 0;
}
