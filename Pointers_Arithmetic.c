#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Getting string length
    const char *String1 = "How are you"; // Hardcoded input
    const char *String2 = String1;
    while (*String2)
    {
        ++String2;
    }

    int K = String2 - String1;

    printf("%d", K);

    return 0;
}