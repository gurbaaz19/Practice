#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int main()
{
    int i;
    printf("Enter: ");
    scanf("%d",&i);
    int * pi=&i;
    printf("%p\n",pi);
}