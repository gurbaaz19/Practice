#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = NULL;

    //Initial memory allocation
    str = (char *)malloc(15000 * sizeof(char));
    strcpy(str, "Jason");
    printf("String = %s, Address = %p\n", str, str);

    //Reallocating memory
    str = (char *)realloc(str, 25000 * sizeof(char));
    strcat(str, ".com");
    printf("String = %s, Address = %p\n", str, str);

    free(str);

    printf("\n-----------------------------------------------------------------------------------------\n\n");

    //Question given by sir
    printf("Question\n\n");
    int size = 0;
    printf("Enter the limit of your text: ");
    scanf("%d", &size);

    char *text = (char *)calloc(size, sizeof(char));

    if (text != NULL)
    {
        printf("Enter your text : \n");
        scanf(" ");
        gets(text);

        printf("Inputed text is: %s\n", text);
    }

    free(text);
    text = NULL;

    return 0;
}