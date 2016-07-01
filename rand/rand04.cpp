#include <iostream>
#include <ctime>
#include <cstdlib>
#define n 20
using namespace std;

int main()
{
    srand (time(0));
    for (int i = 0; i < n; i++)
        cout << char(rand() % 26 + 97);
    cout << endl;
    return 0;
}
