#include <stdio.h>
#include <stdlib.h>

float absoluteValue(float u);

int main()
{
    float u;
    printf("Enter Number for Absolute Value\n");
    scanf("%f", &u);
    float result=absoluteValue(u);
    printf("%f",result);
    return 0;
}

float absoluteValue(float u)
{
    if (u < 0)
        u = -u;
    return u;
}