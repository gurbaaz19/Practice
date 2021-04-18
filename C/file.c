#include <stdio.h>

int main()
{
    FILE *pfile = NULL;
    int c;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "r"); // opens the txt file to write- rename(), fclose(), remove()

    if (pfile == NULL)
    {
        printf("Failed to open %s\n", filename);
        return -1;
    }
    while ((c = fgetc(pfile)) != EOF) //reading char
        printf("%c", c);

    fclose(pfile);
    pfile = NULL;

    return 0;
}