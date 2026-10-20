#include<stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    int arr[rows][cols];
    printf("\nEnter elements for a %dx%d matrix:\n", rows, cols);
    for(i = 0; i < rows; i++)
        {
        for(j = 0; j < cols; j++)
        {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nYour %dx%d matrix is:\n", rows, cols);
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
