#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void deleteList(struct Node* head) {
    if (head == NULL)
        return;

    deleteList(head->next);

    printf("Deleting node with data %d\n", head->data);
    free(head);
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 2;
    head->next->next = NULL;

    deleteList(head);
    head = NULL;

    return 0;
}

