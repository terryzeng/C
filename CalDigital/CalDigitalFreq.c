//#include "usr/include/stdio.h"
#include <stdio.h>
#include <string.h>

void find_frequency(char[], int[]);

int main()
{
    char string[100];
    int c, count[10] = {0};
    FILE *pFile;

    printf("Input a string of number: \n");
    //gets(string);
    pFile = fopen("myfile.txt","r");
    if (pFile == NULL)
        perror("Error opening file");
    else
    {
        if (fgets(string, 100, pFile) != NULL)
            puts(string);

        find_frequency(string, count);

        fgetc(pFile);
        if (feof(pFile))
            printf("we have reached the end of file\n");
        fclose(pFile);
    }
    printf("STATISTICS:\n");

    for (c = 0; c < 10; c++)
    {
        printf("The frequency of %c is\t %d\n",c + '0', count[c]);
    }
    return 0;
}

void find_frequency(char s[], int count[])
{
    int c = 0;

    while (s[c] != '\0')
    {
        if (s[c] >= '0' && s[c] <= '9')
            count[s[c]-'0']++;
        c++;
    }
}
