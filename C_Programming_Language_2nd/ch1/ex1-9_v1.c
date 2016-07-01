#include <stdio.h>

int main()
{
    int c, pc; // c = character, pc = previous character

    pc = EOF;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            if (pc != ' ')
                putchar(c);

        if (c != ' ')
            putchar(c);
        pc = c;
    }
    return 0;
}
