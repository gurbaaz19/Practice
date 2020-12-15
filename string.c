#include <stdio.h>
#include <string.h>

int main()
{
    char myString[] = "My Name is Jason";
    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);

    printf("The length of the string is : %d\n", strlen(myString));
    printf("%s\n", temp);
    printf("%s\n", strncat(myString, temp, 5));
    //see strcmp and strncmp outputs , not written here.
    return 0;
}