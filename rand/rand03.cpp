#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand((unsigned)time(NULL));
    unsigned int r = rand();
    cout << "r = " << r << endl;
    return 0;
}
