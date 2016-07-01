/*C program - Hexadecimal to Decimal Conversion */

#include <stdio.h>
#include <stdlib.h>
//#include "conio.h"
#include <math.h>

//When you want to compile this program, please use "gcc Hex2Dec_v1.c -lm",it will compile the pow function.
unsigned long convetodecnum(char hex[]);

void main()
{
    unsigned long decnum;
    char hex[9];
    printf("Enter 32-bit Hexadecimal Number:");
    scanf("%s", hex);

    decnum = convetodecnum(hex);
    printf("Value in Decimal Number is %lu \n", decnum);
    fflush(stdin);
    getchar();
}

unsigned long convetodecnum(char hex[])
{
    char *hexstr;
    int length = 0;
    const int base = 16; //Base of Hexadecimal Number
    unsigned long decnum = 0;
    int i;

    //Find the length of Hexadecimal Number
    for (hexstr = hex; *hexstr != '\0'; hexstr++)
    {
        length++;
    }

    //Find Hexadecimal Number
    hexstr = hex;
    for (i = 0; *hexstr != '\0' && i < length; i++, hexstr++)
    {
        //Compare *hexstr with ASCII values
        if (*hexstr >= '0' && *hexstr <= '9')
        {
            decnum += (((int)(*hexstr)) - 48) * pow(base, length - i - 1);
        }
        else if (*hexstr >= 'A' && *hexstr <= 'F')
        {
            decnum += (((int)(*hexstr)) - 55) * pow(base, length - i - 1);
        }
        else if (*hexstr >= 'a' && *hexstr <= 'f')
        {
            decnum += (((int)(*hexstr)) - 87) * pow(base, length - i - 1);
        }
        else{
            printf("Invalid Hexadecimal Number \n");
        }
    }
    return decnum;
}
