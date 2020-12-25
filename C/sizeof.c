#include <stdio.h>

int main()
{
    printf("size of int is %zd bytes\n",sizeof(int));
    printf("size of char is %zd bytes\n",sizeof(char));
    printf("size of long is %zd bytes\n",sizeof(long));
    printf("size of long long is %zd bytes\n",sizeof(long long));
    printf("size of double is %zd bytes\n",sizeof(double));
    printf("size of long double is %zd bytes\n",sizeof(long double));
    return 0;
}