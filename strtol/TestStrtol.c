#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int num1,num2,num3,num4,num5,num6;
    char *stop_at = NULL;
    char temp1[16] = "0xA";
    char temp2[16] = "011";
    char temp3[16] = "123";
    char temp4[16] = "0a23";
    char temp5[16] = "11";
    char temp6[16] = "z";
   
    //if base = 0
    num1 = strtol(temp1, &stop_at, 0);
    num2 = strtol(temp2, &stop_at, 0);
    num3 = strtol(temp3, &stop_at, 0);
    //if base > 1 && base <= 32
    num4 = strtol(temp4, &stop_at, 16);
    num5 = strtol(temp5, &stop_at, 2);
    num6 = strtol(temp6, &stop_at, 36);

    printf("num1 = %d \n", num1);
    printf("num2 = %d \n", num2);
    printf("num3 = %d \n", num3);
    printf("num4 = %d \n", num4);
    printf("num5 = %d \n", num5);
    printf("num6 = %d \n", num6);
    return 0;
}
