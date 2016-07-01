#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int long decimalNumber = 0;
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char Hexadecimal[30];
    int i, j, power = 0, digit;

    printf("Enter a Hexadecimal Number\n");
    scanf("%s", Hexadecimal);

    /*Converting Hexadecimal number to decimal number*/
    for (i = strlen(Hexadecimal)-1; i >= 0; i--)
    {
        /*search current character in hexDigits array*/
        for (j = 0; j < 16; j++)
        {
            if (Hexadecimal[i] == hexDigits[j])
            {
                decimalNumber += j * pow(16, power);
            }
        }
        power++;
    }
        
    printf("Decimal Number : %ld\n", decimalNumber); 
    return 0;
}
