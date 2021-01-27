#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int rem = 0;
    int final = 0;
    int i = 1;
    int binary = 0;

    printf("Enter Integer:");
    scanf("%d", &num);
    int temp = num;

    while (temp != 0)
    {
        rem = temp % 2;
        temp = temp / 2;
        binary = (i * rem) + binary;
        i = i * 10;
    }

    printf("\n%d", binary);

    return 0;
}