#include <iostream>

using namespace std;

int main()
{
    unsigned int seed = 5;
    srand(seed);
    unsigned int r = rand();
    cout << "r = " << r << endl;
    return 0;
}
