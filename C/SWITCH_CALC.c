#include <stdio.h>

int main()
{
    double a = 0.00, b = 0.00;
    char c;
    printf("Enter Expression\n");
    scanf("%lf%c%lf", &a, &c, &b);
    switch (c)
    {
    case '+':
        printf("%lf", a + b);
        break;

    case '-':
        printf("%lf", a - b);
        break;

    case '*':
        printf("%lf", a * b);
        break;

    case '/':
        if (b != 0)
            printf("%lf", a / b);
        else
            printf("Error");
        break;

    default:
        printf("Error");
        break;
    }

    return 0;
}