#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int main()
{
    int i;
    printf("Enter: ");
    scanf("%d", &i);
    int *pi = NULL;
    pi = &i;

    printf("%p\n", pi); //Printing hexadecimal value of address

    printf("%d\n", *pi); //Printing value of the data pointer pointing to (De-referencing of pointer)

    printf("%p\n", (void *)&pi); //Printing address of pointer

    printf("%d\n", (int)sizeof(pi)); //size of address of i (for a 64-bit compiler its 8 bytes)

    return 0;
}