#include <stdio.h>

int main()
{
    double nc;

    for(nc = 0; (getchar() != EOF); ++nc)
        ;
    printf("total nc = %.0f\n", nc);
    return 0;
}


