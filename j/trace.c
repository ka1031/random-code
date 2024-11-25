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

    int trace = a[0][0] + a[1][1] + a[2][2];
    printf("%d", trace);

    return 0;
}
