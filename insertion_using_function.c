#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void insertElement(int arr[], int *size, int element, int pos)
{
    /* Convert 1-based position to 0-based index */
    int index = pos - 1;

    for (int i = *size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;

    (*size)++;
}

int main()
{
    int arr[10] = {10, 20, 30, 40};

    int size = 4;
    int element = 25;
    int pos = 3;

    printf("Original array: ");
    printArray(arr, size);

    insertElement(arr, &size, element, pos);

    printf("Array after insertion: ");
    printArray(arr, size);

    return 0;
}