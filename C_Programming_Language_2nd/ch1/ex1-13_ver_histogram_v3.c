#include <stdio.h>

#define MINLEN          2
#define MAXLEN          10
#define MAXCOUNT        20
#define MIN(x,y)        (x > y)?y:x

int main()
{
    int i, j; // couple of counters
    int c;    // character input
    int cwl, wl[MAXLEN-MINLEN+1];//current word length and stored word lengths

    cwl = 0;
    for (i = 0; i <= MAXLEN - MINLEN; ++i)
        wl[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
            cwl++;
        else if (cwl > 0)
        {
            if (cwl >= MINLEN)
                wl[MIN(cwl-MINLEN, MAXLEN-MINLEN)]++;
            cwl = 0;
        }
    }

    if (cwl >= MINLEN)
        wl[MIN(cwl-MINLEN, MAXLEN-MINLEN)]++;

    for (i = MAXCOUNT; i > 0; --i)
    {
        for (j = 0; j <= MAXLEN - MINLEN; ++j)
        {
            if (wl[j] > i && i == MAXCOUNT)
                putchar('+');
            else if (wl[j] >= i)
                putchar('\223' + (MIN(wl[j]-i, 2)));
            else
                putchar(' ');
            printf("    ");
        }
        putchar('\n');
    }
    for (j = 0; j <= MAXLEN - MINLEN; j++)
    {
        printf("%s%-3d", j == MAXLEN - MINLEN? ">=" : " ", j+MINLEN);
    }
    printf("+\n");
    return 0;
}
