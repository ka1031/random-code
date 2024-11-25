#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Function to check if the number can be expressed as the sum of two prime numbers
void TwoPrime(int num)
{
    // Loop through all numbers from 2 to num/2
    for (int i = 2; i <= num / 2; i++)
    {
        // Check if both numbers are prime
        if (isPrime(i) && isPrime(num - i))
        {
            printf("%d = %d + %d\n", num, i, num - i);
            return; // Once we find a pair, we return
        }
    }
    // If no pair is found, print that it cannot be expressed
    printf("%d cannot be expressed as sum of 2 prime numbers\n", num);
}

int main()
{
    int n, number;

    // Read the number of test cases
    printf("Enter n = ");
    scanf("%d", &n);

    printf("Enter Numbers: ");
    // Loop to process each number
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number);
        // Call TwoPrime for each number
        TwoPrime(number);
    }

    return 0;
}
