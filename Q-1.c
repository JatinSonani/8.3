//Q.1 Write a Program to find the average of a given 2D array.

#include<stdio.h>

main()
{
    int rows, cols, i, j;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int arr[rows][cols];
    
    printf("Enter %d elements for the 2D array:\n", rows * cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int sum = 0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    
    double average = (double)sum / (rows * cols);
    
    printf("Average of the 2D array: %.2lf\n", average);
    
}
