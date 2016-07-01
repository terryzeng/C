#include <stdio.h>

#if 0
main()
{
    int c, n1;

    n1 = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++n1;
    printf("line count = %d\n", n1);
}
#else

main()
{
    int c;
    int line_count = 0;
    int done = 0;
    int lastchar = 0;

    while (done == 0)
    {
        c = getchar();
        if (c == '\n')
            ++line_count;
        if (c == EOF)
        {
            if (lastchar != '\n')
                ++line_count;
            done = 1;
        }
        lastchar = c;
    }

    printf("line count = %d\n", line_count);
}
#endif
