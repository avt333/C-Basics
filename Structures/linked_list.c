#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* add(int data, Node *p) {
    Node *current = (Node *)malloc(sizeof(Node));
    current->data = data;
    
    current->next = p->next;
    p->next = current;

    return current;
}

Node* create_head(int data) {
    Node* head = (Node *)malloc(sizeof(Node));
    head->data = data;
    head->next = NULL;

    return head;
}

int main() {
    Node *head = create_head(10);
    Node *third = add(20, head);
    Node *second = add(15, head);

    free(head);
    free(second);
    free(third);
    return 0;
}