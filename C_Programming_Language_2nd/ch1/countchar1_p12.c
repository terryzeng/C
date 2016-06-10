#include <stdio.h>

int main()
{
    long nc;
    int c;

    nc = 0;
    c = getchar();
    while (c != EOF)
    {
        nc++;
        c = getchar();
        printf("nc=%ld\n",nc);
    }
    printf("total nc = %ld\n", nc);
    return 0;
}


