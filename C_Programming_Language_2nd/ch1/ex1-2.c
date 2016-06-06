#include <stdio.h>

int main(void)
{
    printf("Audible or visual alert. \a\n");
    printf("From feed. \f\n");
    printf("This escape, \r, moves the active position to the initial position of the current line. \n");
    printf("Vertical tab \v is tricky, as its behaviour is unspecified under certain condition.\n");
    return 0; 
}
