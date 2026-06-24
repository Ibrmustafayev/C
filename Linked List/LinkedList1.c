#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

Node* createNode(int value);
void append(Node **head, int value);
void printList(Node *head);
void freeList(Node *head);

int main() {
    Node *head = NULL;
    int n, value;

    printf("How many numbers? : ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        append(&head, value);
    }
    printf("\nList: ");
    printList(head);
    free(head);

    return 0;
}

Node* createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }
    newNode -> value = value;
    newNode -> next = NULL;
    return newNode;
}

void append(Node **head, int value) {
    Node *newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node *current = *head;
    while (current -> next != NULL) {
        current = current -> next;
    }
    current -> next = newNode;
}

void printList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current -> value);
        current = current -> next;
    }
    printf("NULL\n");
}

void freeList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        Node *temp = current;
        current = current -> next;
        free(temp);
    }
}
