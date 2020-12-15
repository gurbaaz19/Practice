#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v);

int main()
{
    int x = 0, y = 0;
    printf("Enter Numbers for GCD\n");
    scanf("%i %i", &x, &y);
    int result = gcd(x, y);
    printf("GCD is %i", result);
    return 0;
}

int gcd(int u, int v)
{
    int result = 0;
    for (int i = 1; i <= u && i <= v; i++)
    {
        if (u % i == 0 && v % i == 0)
        {
            result = i;
        }
    }

    return result;
}