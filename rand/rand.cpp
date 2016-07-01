#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    unsigned int min = 0;
    unsigned int max = 99999;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 5; i++)
    {
        int randnum = (rand()%(max - min)) + min + 1;
        //cout << rand() << '\t';
        cout << randnum << '\t';
    }
    cout << endl;
    return 0;
}
