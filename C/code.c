#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int flag1 = 0, flag2 = 0;
    char input[101] = {};
    scanf("%s", input);
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] > 96 && input[i] < 123)
        {
            flag1++;
        }
        else if (input[i] > 64 && input[i] < 91)
        {
            flag2++;
        }
    }

    if (flag1 >= flag2)
    {
        for (int i = 0; i < strlen(input); i++)
        {
            if (input[i] > 64 && input[i] < 91)
            {
                input[i] = input[i] + 32;
            }
        }
    }

    else if (flag1 < flag2)
    {
        for (int i = 0; i < strlen(input); i++)
        {
            if (input[i] > 96 && input[i] < 123)
            {
                input[i] = input[i] - 32;
            }
        }
    }

    printf("%s", input);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
