#include <stdio.h>

int main()
{
    int base_address = 1000;
    int element_size = sizeof(int);

    int i = 3, j = 2;

    int lower_bound_row = 0;
    int lower_bound_col = 0;

    int total_columns = 5;

    int address_2D = base_address +
                     element_size *
                     ((i - lower_bound_row) * total_columns +
                      (j - lower_bound_col));

    printf("2D Array Address Calculation\n");
    printf("Base Address (B): %d\n", base_address);
    printf("Element Size (W): %d bytes\n", element_size);
    printf("Calculated Address for A[%d][%d]: %d\n",
           i, j, address_2D);

    return 0;
}