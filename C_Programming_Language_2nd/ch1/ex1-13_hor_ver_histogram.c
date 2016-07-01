#include <stdio.h>
#define is_lower(N) ((N) >= 'a' && (N) <= 'z')
#define is_upper(N) ((N) >= 'A' && (N) <= 'Z')
#define is_alpha(N) (is_upper(N) || is_lower(N))
#define OUT_WORD        0
#define IN_WORD         1
#define MAX_WRD_LEN     1000

int main()
{
    int status, longest, most, i, j, k, len;
    char c;
    int word[MAX_WRD_LEN];

    for (i = 0; i < MAX_WRD_LEN; i++)
        word[i] = 0;

    len = 0;
    status = OUT_WORD;

    while ((c = getchar()) != EOF)
    {
        if (is_alpha(c))
        {
            if (status == OUT_WORD)
            {
                status = IN_WORD;
                ++word[len];
                len = 1;
            }
            else
                ++len;
        }
        else
        {
            status = OUT_WORD;
        }
    }
    ++word[len];

    longest = 0, most = 0;
    puts("\nSTATISTICS:\n");
    for (i = 1; i < MAX_WRD_LEN; i++)
    {
        if (word[i] && i > longest)
            longest = i;
        if (word[i] > most)
            most = word[i];
        if (word[i])
        {
            printf("%2d words of length is %d\n", word[i], i);
        }
    }
    printf("\ngreatest word length: %d\n", longest);
    printf("most words of a given length: %d\n", most);

    /*Horizontal histograph*/
    puts("\nHORIONTAL HISTOGRAPH");
    puts("\nword length | graph");
    for (i = 1; i <= longest; i++)
    {
        printf("%11d : ", i);
        for (j = 1; j <= word[i]; j++)
            printf("*");
        putchar('\n');
    }

    /*Vertical histograph*/
    puts("\nVERTICAL HISTOGRAPH");
    puts("\nWd Ct:");
    for (k = most; k > 0; k--)
    {
        printf("%5d:   ",k);
        for (i = 1; i <= longest; i++)
        {
            if (word[i] < k) 
                printf("    ");
            else 
                printf("*   ");
        }
        putchar('\n');
    }
    printf("    ");
    for (i = 1; i <= longest; i++)
        printf("====");
    printf("\nWd Ln:");
    for (i = 1; i <= longest; i++)
        printf("%4d", i);
    putchar('\n');
    return 0;
}
