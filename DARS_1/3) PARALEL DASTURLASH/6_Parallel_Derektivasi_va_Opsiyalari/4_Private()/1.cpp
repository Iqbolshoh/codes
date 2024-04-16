#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int c = 5;
#pragma omp parallel private(c) num_threads(9)
    {
        cout << " c = " << c;
        c = c + 1;
        cout << " c = " << c <<endl;
    }
    return 0;
}
