#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 50;

    printf("Sorted Array:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    int result = binarySearch(arr, size, key);

    if (result != -1)
    {
        printf("Element %d found at position %d\n",
               key, result + 1);
    }
    else
    {
        printf("Element %d not found\n", key);
    }

    return 0;
}