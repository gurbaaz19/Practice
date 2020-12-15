# include <stdio.h>

int main()
{
    unsigned int a =60; // 60's binary code is 0000 0011 1100
    int b = a<<2;
    int c = a>>2;
    printf("b is %d \nc is %d \n", b, c);
    return 0;
}