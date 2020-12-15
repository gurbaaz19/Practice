#include <stdio.h>

int main()
{
    char srt[100];
    int i;
    double x;
    
    printf("Enter a value :");

    scanf("%lf %d %s",&x,&i,srt);

    printf("\nYou entered: %lf, %d, %s",x,i,srt);
    
    return 0;
}
