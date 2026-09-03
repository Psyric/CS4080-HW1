typedef struct Node {
    char *value;
    struct Node *prev;
    struct Node *next;
} Node;

Node* insert(Node **head, const char *value);
Node* find(Node *head, const char *value);
void delete(Node **head, Node *node);
void print_list(Node *head);
