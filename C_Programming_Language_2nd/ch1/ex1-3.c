#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    printf("  F         C\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3.0f \t %6.1f \n", fahr, celsius);
        fahr = fahr + step;
    }
}
