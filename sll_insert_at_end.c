#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *newNode, *temp;

    head = malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    newNode = malloc(sizeof(struct Node));

    printf("Enter value: ");
    scanf("%d", &newNode->data);

    newNode->next = NULL;

    temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;

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