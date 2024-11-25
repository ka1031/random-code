#include <stdio.h>

int main(void)
{
    int mat[10][10];
    printf("enter the elemnts of the matrix ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < 3; j++)
        {
            rowsum += mat[i][j];
            printf("%d\t", mat[i][j]);
        }
        printf("%d", rowsum);
        printf("\n");
    }
}