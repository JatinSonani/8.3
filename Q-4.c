//Q.4 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.

#include<stdio.h>

main()
{
    int rows = 5, cols = 5;
    int arr[5][5];
    int sum = 0;

    printf("Enter %d elements for the 5x5 array:\n", rows * cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Boundary elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("Sum of boundary elements: %d\n", sum);

}
