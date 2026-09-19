#include <stdio.h>

int main()
{
    int arr1D[4] = {10, 20, 30, 40};

    int arr2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Accessing Elements\n");

    printf("1D array index 2: %d\n", arr1D[2]);

    printf("2D array row 1, column 2: %d\n", arr2D[1][2]);

    printf("\n1D Array:\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr1D[i]);
    }

    printf("\n\n2D Array:\n");

    int row = 0;

    while (row < 2)
    {
        int col = 0;

        while (col < 3)
        {
            printf("%d ", arr2D[row][col]);
            col++;
        }

        printf("\n");
        row++;
    }

    return 0;
}