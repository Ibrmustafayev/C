#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

Node* createNode(int value);
void append(Node **head, int value);
void insert(Node **head, int value, int index);
void delete(Node **head, int index);
void search(Node **head, int value);
void printList(Node *head);
void freeList(Node *head);
int length(Node *head);

int main() {
    Node *head = NULL;
    int value, option, index;
    
    while (1) {
        printf("=== Linked List Menu ===\n1. Append\n2. Insert at index\n3. Delete at index\n4. Search\n5. Print list\n6. Get length\n7. Exit");
        printf("\n\nOption: ");
        scanf("%d", &option);
        if (option == 7) {
            printf("\nGoodbye!!!");
            freeList(head);
            break;
        } else if (option == 1) {
            printf("\nEnter a number: ");
            scanf("%d", &value);
            append(&head, value);
        } else if (option == 2) {
            printf("\nEnter a number: ");
            scanf("%d", &value);
            printf("Enter index: ");
            scanf("%d", &index);
            insert(&head, value, index);
        } else if (option == 3) {
            printf("\nEnter index: ");
            scanf("%d", &index);
            delete(&head, index);
        } else if (option == 4) {
            printf("\nSearch for: ");
            scanf("%d", &value);
            search(&head, value);
        } else if (option == 5) {
            printList(head);
        } else if (option == 6) {
            printf("\nLength: %d\n", length(head));
        } else {
            printf("\nInvalid option!!!");
        }
        printf("\n");
    }

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
        printList(*head);
        return;
    }
    Node *current = *head;
    while (current -> next != NULL) {
        current = current -> next;
    }
    current -> next = newNode;
    printList(*head);
}

void insert(Node **head, int value, int index) {
    if (*head == NULL) {
        printf("No linked list!");
        return;
    }
    int len = length(*head);
    if (index < 0 || index > len) {
        printf("Invalid index!!!");
        return;
    }
    Node *newNode = createNode(value);
    if (index == 0) {
        newNode -> next = *head;
        *head = newNode;
        printList(*head);
        return;
    }
    Node *current = *head;
    for (int i = 0; i < index - 1; i++) {current = current -> next;}
    newNode -> next = current -> next;
    current -> next = newNode;
    printList(*head);
}

void delete(Node **head, int index) {
    if (*head == NULL) {
        printf("No linked list!");
        return;
    }
    int len = length(*head);
    if (index < 0 || index >= len) {
        printf("Invalid index!!!");
        return;
    }
    if (index == 0) {
        Node *temp = *head;
        *head = (*head) -> next;
        free(temp);
        printList(*head);
        return;
    }
    Node *current = *head;
    for (int i = 0; i < index - 1; i++) {current = current -> next;}
    Node *temp = current -> next;
    current -> next = temp -> next;
    free(temp);
    printList(*head);
}

void search(Node **head, int value) {
    if (*head == NULL) {
        printf("No linked list!");
        return;
    }
    int ind = 0;
    Node *current = *head;
    while (current != NULL) {
        if (current -> value == value) {
            printf("Found at %d\n", ind);
            return;
        }
        current = current -> next;
        ind++;
    }
    printf("Not Found!\n");
}

void printList(Node *head) {
    if (head == NULL) {
        printf("\nNo linked list!");
        return;
    }
    printf("\nList: ");
    Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current -> value);
        current = current -> next;
    }
    printf("NULL\n");
}

void freeList(Node *head) {
    if (head == NULL) {
        printf("\nNo linked list!");
        return;
    }
    Node *current = head;
    while (current != NULL) {
        Node *temp = current;
        current = current -> next;
        free(temp);
    }
}

int length(Node *head) {
    int length = 0;
    Node *current = head;
    while (current != NULL) {
        length++;
        current = current -> next;
    }
    return length;
}
