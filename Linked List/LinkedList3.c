#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
} Node;

Node* createNode(int value);
void push(Node **top, int value);
void pop(Node **top);
void enqueue(Node **front, Node **rear, int value);
void dequeue(Node **front, Node **rear);
void printStack(Node *top);
void printQueue(Node *front);
void freeObject(Node *head);

int main() {
    Node *top = NULL, *front = NULL, *rear = NULL;
    int n, value, option;

    while (1) {
        printf("=== Stack & Queue Menu ===\n1. Push (stack)\n2. Pop (stack)\n3. Enqueue (queue)\n4. Dequeue (queue)\n5. Print stack\n6. Print queue\n7. Exit");
        printf("\n\nOption: ");
        scanf("%d", &option);
        if (option == 7) {
            printf("\nGoodbye!!!");
            freeObject(top);
            freeObject(front);
            break;
        } else if (option == 1) {
            printf("\nHow many to push? : ");
            scanf("%d", &n);
            printf("Push to stack: ");
            for (int i = 0; i < n; i++) {
                scanf("%d", &value);
                push(&top, value);
            }
            printStack(top);
        } else if (option == 2) {
            pop(&top);
        } else if (option == 3) {
            printf("How many to enqueue? : ");
            scanf("%d", &n);
            printf("Enqueue to queue: ");
            for (int i = 0; i < n; i++) {
                scanf("%d", &value);
                enqueue(&front, &rear, value);
            }
            printQueue(front);
        } else if (option == 4) {
            dequeue(&front, &rear);
        } else if (option == 5) {
            printf("\n");
            printStack(top);
        } else if (option == 6) {
            printf("\n");
            printQueue(front);
        } else {
            printf("\nInvalid option!!!\n");
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

void push(Node **top, int value) {
    Node *newNode = createNode(value);
    newNode -> next = *top;
    *top = newNode;
}

void pop(Node **top) {
    if (*top == NULL) {
        printf("None to pop!\n");
        printStack(*top);
        return;
    }
    Node *temp = *top;
    printf("\nPop stack -> returns %d\n", temp -> value);
    *top = temp -> next;
    printStack(*top);
    free(temp);
}
 
void enqueue(Node **front, Node **rear, int value) {
    Node *newNode = createNode(value);
    if (*rear == NULL) {
        *front = newNode;
        *rear = newNode;
        return;
    }
    (*rear) -> next = newNode;
    *rear = newNode;
}

void dequeue(Node **front, Node **rear) {
    if (*front == NULL) {
        printf("None to dequeue!\n");
        printQueue(*front);
        return;
    }
    Node *temp = *front;
    printf("Dequeue queue -> returns %d\n", temp -> value);
    *front = temp -> next;
    if (*front == NULL) {*rear = NULL;}
    printQueue(*front);
    free(temp);
}

void printStack(Node *top) {
    printf("Stack: ");
    if (top == NULL) {
        printf("NULL\n");
        return;
    }
    Node *current = top;
    while (current != NULL) {
        printf("%d -> ", current -> value);
        current = current -> next;
    }
    printf("NULL    (%d is on top)\n", top -> value);
}

void printQueue(Node *front) {
    printf("Queue: ");
    if (front == NULL) {
        printf("NULL\n");
        return;
    }
    Node *current = front;
    while (current != NULL) {
        printf("%d -> ", current -> value);
        current = current -> next;
    }
    printf("NULL    (%d is front)\n", front -> value);
}

void freeObject(Node *head) {
    while (head != NULL) {
        Node *temp = head;
        head = head -> next;
        free(temp);
    }
}
