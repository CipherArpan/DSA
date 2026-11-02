#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head, *second, *third, *temp;

    int key, position = 1, found = 0;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("Enter element to search: ");
    scanf("%d", &key);

    temp = head;

    while (temp != NULL) {

        if (temp->data == key) {
            printf("Element found at position %d\n", position);
            found = 1;
            break;
        }

        temp = temp->next;
        position++;
    }

    if (found == 0) {
        printf("Element not found\n");
    }

    free(head);
    free(second);
    free(third);

    return 0;
}