#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

int main()
{
    int i=1;
    int *pi=&i;

    *pi+=2; 
    printf("%d",i);
     
}