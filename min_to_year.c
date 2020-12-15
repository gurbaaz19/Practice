#include <stdio.h>

int main()
{
    double min = 0, min_in_yr = 60 * 24 * 365.25, yr = 0, days = 0;
    printf("Note: No. of days in a year are taken to be 365.25\n");
    printf("Enter the number of minutes: ");
    scanf("%lf", &min);
    yr = min / min_in_yr;
    days = yr * 365.25;
    printf("\nNo. of Years are %lf\nNo. of days are %lf\n", yr, days);
    return 0;
}