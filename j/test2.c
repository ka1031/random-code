#include <stdio.h>
int main()
{
    int i, space, rows = 5, k = 0, n, count = 0, count1 = 0;
    printf("Enter the number ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        for (i = 1; i <= rows; ++i, k = 0)
        {
            for (space = 1; space <= rows - i; ++space)
            {
                printf(" ");
            }
            while (k != 2 * i - 1)
            {
                printf("* ");
                ++k;
            }
            printf("\n");
        }
    }
    else
    {
        for (i = 1; i <= 5; ++i)
        {
            for (space = 1; space <= 5 - i; ++space)
            {
                printf(" ");
                ++count;
            }
            while (k != 2 * i - 1)
            {
                if (count <= rows - 1)
                {
                    printf("%d ", i + k);
                    ++count;
                }
                else
                {
                    ++count1;
                    printf("%d ", (i + k - 2 * count1));
                }
                ++k;
            }
            count1 = count = k = 0;
            printf("\n");
        }
    }
    return 0;
}