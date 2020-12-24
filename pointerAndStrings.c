#include <stdio.h>
#include <string.h>
#include <stddef.h>

void CopyString(char *to, char *from)
{
    while(*from!='\0')
    {
        *to++ = *from++;
    }
    *to = '\0';
}
int main()
{
    char to[50], from[]="Hi How Are You";
    CopyString(to,from);
    printf("%s", to);
    return 0;
}