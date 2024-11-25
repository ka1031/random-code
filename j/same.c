#include <stdio.h>

#define SIZE 3

int main(void)
{
    int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE] = {0};

    printf("Enter the elements of the first 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int k = 0;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (a[i][j] = !a[j][i])
            {
                k = 1;
            }
        }
    }
    if (k == 1)
    {
        printf("matrix is not symmetric ");
    }
    else if (k == 0)
    {
        printf("matrix is symmetric");
    }

    return 0;
}
