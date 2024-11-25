#include <stdio.h>

int main(void)
{
    int i, j;
    printf("Enter lower and upper limit: ");
    scanf("%d %d", &i, &j);

    for (int k = i; k <= j; k++)
    {

        int prime = 1;
        if (k <= 1)
        {
            prime = 0;
        }
        else
        {
            for (int l = 2; l * l <= k; l++)
            {
                if (k % l == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        int rev = 0;
        int original = k;
        while (k > 0)
        {
            int rem = k % 10;
            rev = rev * 10 + rem;
            k /= 10;
        }

        if (prime && rev == original)
        {
            printf("%d\n", original);
        }

        k = original;
    }

    return 0;
}
