#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *newNode, *temp;

    int value, position;

    head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    newNode = malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &position);

    if (position < 1) {
        printf("Invalid position\n");
        free(newNode);
        free(head);
        return 0;
    }

    if (position == 1) {
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    else {
        temp = head;

        for (int i = 1; i < position - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            printf("Invalid position\n");
            free(newNode);
        }
        else {
            newNode->data = value;
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}