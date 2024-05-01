//Q.3 Write a Program to find the sum of diagonal elements from a given 2D array.

#include<stdio.h>

int main() 
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
        sum += arr[i][i]; 
        sum += arr[i][cols - i - 1];
    }
    
    printf("Sum of diagonal elements: %d\n", sum);
    
}
