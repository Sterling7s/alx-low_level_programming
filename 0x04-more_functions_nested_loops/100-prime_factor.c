#include <stdio.h>
/**
 * main - function finds and prints the largest prime factor of 612852475143
 * Return: 0 
 */
int main(void)
{
    long long num = 612852475143;
    long long largestPrimeFactor = 0;
    long long divisor = 2;

    while (num > 1)
    {
        if (num % divisor == 0)
        {
            largestPrimeFactor = divisor;
            while (num % divisor == 0)
            {
                num /= divisor;
            }
        }
        divisor++;
    }

    printf("%lld\n", largestPrimeFactor);
    return 0;
}
