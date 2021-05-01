#include <stdio.h>

int main()
{

    double a, b, c, p, q, r, x = 0, y = 0;
    printf("ax+by=c and px+qy=r\n");
    printf("a= ");
    scanf(" %lf", &a);
    printf("b= ");
    scanf(" %lf", &b);
    printf("c= ");
    scanf(" %lf", &c);
    printf("p= ");
    scanf(" %lf", &p);
    printf("q= ");
    scanf(" %lf", &q);
    printf("r= ");
    scanf(" %lf", &r);

    y = (r - (c * p / a)) / (q - (b * p / a));
    x = (c / a) - (b / a) * (y);

    printf("x= %lf and y =%lf\n", x, y);
    return 0;
}