#include <stdio.h>
#include <string.h>

int main()
{
    //Problem 1
    char multiple1[] = "a string";
    char *p = multiple1;

    for (int i = 0; i < strlen(multiple1); ++i)
    {
        printf("multiple1[%d]= %c *(p+%d)= %c &multiple1[%d]= %p p+%d= %p\n", i, multiple1[i], i, *(p + i), i, &multiple1[i], i, p + i);
    }

    printf("\n------------------------------------------------------------------------------------------\n\n");

    //Problem 2
    long multiple2[] = {15L, 25L, 35L, 45L};
    long *q = multiple2;

    for (int i = 0; i < sizeof(multiple2) / sizeof(multiple2[0]); ++i)
    {
        printf("address q+%d(&multiple2[%d]): %llu    *(q+%d) value: %d\n", i, i, (unsigned long long)(q + i), i, *(q + i));
    }

    printf("\n Type long occupies: %d bytes\n", (int)sizeof(long));

    return 0;
}
