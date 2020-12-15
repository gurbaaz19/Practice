#include <stdio.h>
#include <stdlib.h>

#define YEARS 5
#define MONTHS 12

int main()
{
    float sum1 = 0.0;
    float sum2 = 0.0;
    float sum3 = 0.0;
    float avg = 0.0;
    float yrsum[5];
    float monthavg[12];

    float rainfall[YEARS][MONTHS] =
        {
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
            {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
            {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
            {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};

    printf("YEAR\t\tRAINFALL (inches)\n");

    for (int i = 0; i < YEARS; i++)
    {
        sum1 = 0;
        for (int j = 0; j < MONTHS; j++)
        {
            sum1 += rainfall[i][j];
        }
        yrsum[i] = sum1;
        printf("%i\t\t%.1f\n", 2010 + i, yrsum[i]);
    }

    for (int i = 0; i < YEARS; i++)
    {
        sum2 += yrsum[i];
    }

    avg = sum2 / YEARS;

    printf("\nAvg Rainfall is %0.1f\n", avg);

    printf("\nMONTHLY AVERAGES:\n");

    printf("\nJan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

    for (int i = 0; i < MONTHS; i++)
    {
        sum3 = 0;
        for (int j = 0; j < YEARS; j++)
        {
            sum3 += rainfall[j][i];
        }
        monthavg[i] = sum3 / YEARS;
        printf("%.1f ", monthavg[i]);
    }

    printf("\n\n");

    return 0;
}