#include <stdio.h>

int sum(int a);

int main()
{
    int n = 0;
    scanf(" %d", &n);
    printf("%d\n", sum(n));
    return 0;
}

int sum(int a)
{
    if (a != 0)
    {
        return a + sum(a - 1);
    }
    else
        return a;
}