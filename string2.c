#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = "Every dog has its day";
    char word[] = "dog";
    char ch = 'h';
    char *pFound1 = NULL; //pointer
    char *pFound2 = NULL; //pointer
    pFound1 = strchr(text, ch);
    pFound2 = strstr(text, word); //case sensitive
    printf("1 %s\n", pFound1);
    printf("2 %s\n", pFound2);

    return 0;
}