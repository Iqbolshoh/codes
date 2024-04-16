#include <iostream>
#include <math.h>
#include <omp.h>

using namespace std;

int main()
{
    int c = 7;
#pragma omp parallel firstprivate(c) num_threads(9)
    {
        cout << " c = " << c << " ";
        c ++;
        cout << " c = " << c << endl;
    }
    return 0;
}
