#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *reverseList(struct Node *head) {

    struct Node *curr = head, *prev = NULL, *next;

    // traverse all the nodes of Linked List
    while (curr != NULL) {

        // store next
        next = curr->next;

        // reverse current node's next pointer
        curr->next = prev;

        // move pointers one position ahead
        prev = curr;
        curr = next;
    }

    return prev;
}

void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d", node->data);
        if (node->next)
            printf(" -> ");
        node = node->next;
    }
}

struct Node *createNode(int new_data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

int main() {

    struct Node *head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    head = reverseList(head);

    printList(head);

    return 0;
}
