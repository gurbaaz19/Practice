#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    bool isPrime;
    int primeNo[50] = {2, 3};
    int i;
    int index = 2;

    for (n = 5; n < 100; n = n + 2)
    {
        isPrime = true;
        for (i = 1; isPrime && n / primeNo[i] >= primeNo[i]; ++i)
        {
            if (n % primeNo[i] == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime == true)
        {
            primeNo[index] = n;
            ++index;
        }
    }

    for (i = 0; i < index; i++)
    {
        printf("%i ", primeNo[i]);
    }
    printf("\n");

    return 0;
}