#include <stdio.h>

#if 0  // This method has a issue which can't count the new line when the lastchar is not end with a newline 
int main()
{
    int c, nSpace = 0, nTable = 0, nEnter = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++nSpace;
        if (c == '\t')
            ++nTable;
        if (c == '\n')
            ++nEnter;
    }
    printf(" Space count=%d\n Table count=%d\n Enter count=%d\n", nSpace, nTable, nEnter);
}
#else
int main(void)
{
    int blanks = 0, tabs = 0, newlines = 0;
    int c;
    int done = 0;
    int lastchar = 0;
    
    while (done == 0)
    {
        c = getchar();
        if (c == ' ')
            ++blanks;
        if (c == '\t')
            ++tabs;
        if (c == '\n')
            ++newlines;

        if (c == EOF)
        {
            if (lastchar != '\n')
            {
                ++newlines;
            }
            done = 1;
        }
        lastchar = c;
    }
    printf("Blanks: %d\nTabs: %d\nLines: %d\n",blanks, tabs, newlines);
    return 0;
}
#endif
