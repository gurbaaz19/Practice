#include <stdio.h>

int main()
{
    char a;
    int ascii;
    printf("Enter: ");
    scanf("%c", &a);
    ascii = a;

    if (ascii > 64 && ascii < 123)
    {
        printf("Its an alphabet\n");
        printf("ASCII: %d\n", ascii);
    }
    else if (ascii > 47 && ascii < 58)
    {
        printf("Its a digit\n");
        printf("ASCII: %d\n", ascii);
    }
    else
    {
        printf("Its none\n");
        printf("ASCII: %d\n", ascii);
    }
    return 0;
}