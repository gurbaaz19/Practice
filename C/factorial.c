#include <stdio.h>

int factorial(int a);

int main()
{
    int n = 0;
    scanf(" %d", &n);
    int result = factorial(n);
    if(result>=0){
    printf("%d\n", result);
    }
    return 0;
}

int factorial(int a)
{
    if (a >= 1)
    {
        return a*factorial(a - 1);
    }
    else if(a ==0){
        return 1;
    }
    else{
        printf("Not allowed\n");
    }
        return a;
}