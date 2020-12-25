#include <stdio.h>

void square(int *number);

int main()
{
    int i = 0;

    printf("Enter number to be squared: ");
    scanf("%d", &i);

    square(&i);

    printf("Answer: %d", i);
}

void square(int * const number)
{
    *number = (*number) * (*number);
}