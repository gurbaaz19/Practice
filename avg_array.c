#include <stdio.h>

int main()
{
    int count = 0;

    printf("Enter the No. of entries ");

    scanf("%i", &count);
    int grades[count];
    long sum = 0;
    float average = 0.0f;

    printf("Enter the %i numbers\n", count);

    int i;
    for (i = 0; i < count; ++i)
    {
        printf("%2u>", i + 1);
        scanf("%i", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum / count;

    printf("The average of %i entered numbers is %.2f\n", count, average);

    return 0;
}