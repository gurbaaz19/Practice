#include <stdio.h>

int main()
{
    double length=0, width=0, perimeter=0, area=0;// declaring variables

    printf("Enter Length:");
    scanf("%lf", &length);//input

    printf("\nEnter Width:");

    scanf("%lf", &width);//input

    perimeter = 2 * (length + width);//calculation

    area = length * width;//calculation

    printf("\nPerimeter is %.2f\nArea is %.2f\n", perimeter, area);//printing result
    
    return 0;
}