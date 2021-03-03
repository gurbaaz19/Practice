#include <stdio.h>
#include <math.h>

int main()
{
    int i, k=1, n = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    if (n == 2)
    {
        printf("\nPrime");
    }

    else if (n != 2 && (n == 1 || n % 2 == 0))
    {
        printf("\nNot Prime");
    }

    if (n > 2 && n % 2 != 0)
    {
        i = 3;
        while (k > 0 && i <= sqrt(n))
        {
            k = n % i;
            i = i + 2;   
        } 

        if (k == 0)
            printf("\nNot Prime\n");

        if (k != 0)
        {
            printf("\nPrime\n");
        }
    }
    return 0;
}
