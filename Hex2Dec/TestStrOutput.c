#include <stdio.h>

int main()
{
    char str[] = "10A";
    char *p = "0F";
    int num;
    unsigned int inVal;

    int number = (int)strtol(str, NULL, 16);
    printf("Number = %d\n", number);

    sscanf(p, "%x", &inVal);
    printf("value = 0x%x - %d\n", inVal, inVal);

    sscanf(str, "%x", &num);
    printf("Num = 0x%x %d\n", num, num);

    char buf[6];
    int intVal = 123;
    sprintf(buf, "%d", intVal);
    printf("buf = %s\n",buf);

    char test[4];
    char *message="016";
    intVal = strtol(message, NULL, 16);
    printf("message = %d\n", intVal);

    test[0]=0x31;
    test[1]=0x31;
    test[2]=0x31;
    test[3]=0x41;
    printf("test[0]=%x\n",test[0]);
    printf("test[1]=%x\n",test[1]);
    printf("test[2]=%x\n",test[2]);
    printf("test[3]=%x\n",test[3]);

    intVal = strtoul(test, NULL, 16);
    printf("intVal = %d\n", intVal);
    sprintf(test, "%u", intVal); 
    printf("test = %s\n",test);
}
