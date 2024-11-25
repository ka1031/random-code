#include <stdio.h>

int main()
{
    int n, i, j;

    // Ask user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print the upper part of the diamond
    for (i = 1; i <= n; i++)
    {
        // Print spaces
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Print the lower part of the diamond
    for (i = n - 1; i >= 1; i--)
    {
        // Print spaces
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
