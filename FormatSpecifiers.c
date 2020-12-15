#include <stdio.h>

int main()
{
    int iV = 100;
    float fV = 331.79;
    double dV = 8.44e+11;
    char cV = 'W';

    _Bool bV = 0;

    printf("iV=%i\n", iV);
    printf("fV=%f\n", fV);
    printf("fV=%.2f\n", fV);
    printf("dV=%e\n", dV);
    printf("dV=%g\n", dV);
    printf("cV=%c\n", cV);

    printf("bV=%i\n", bV);

    return 0;
}