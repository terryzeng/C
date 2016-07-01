#include <stdlib.h>
static unsigned int RAND_SEED; 

int random(void)
{
    RAND_SEED = (RAND_SEED * 123 + 59) % 65536;
    return (RAND_SEED);
}

void random_start(void)
{
    int temp[2];
    movedata(0x0040, 0x006c, FP_SEG(temp), FP_OFF(temp), 4);
    RAND_SEED = temp[0];
}

main()
{
    unsigned int i, n;
    random_start();
    for (i = 0; i < 10; i++)
        printf("%d\t", random());
    printf("\n");
}
