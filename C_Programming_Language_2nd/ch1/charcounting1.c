#include <stdio.h>

int main()
{
    long nc;
    int c;

    nc = 0;
    while (getchar() != EOF)
    {
        nc++;
    }
    printf("total nc = %ld\n", nc);
    return 0;
}


