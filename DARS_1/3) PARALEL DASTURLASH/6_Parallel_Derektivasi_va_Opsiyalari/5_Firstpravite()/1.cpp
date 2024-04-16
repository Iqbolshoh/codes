#include <iostream>
#include <math.h>
#include <omp.h>

using namespace std;

int main()
{
    int n = 7;
#pragma omp parallel firstprivate(n) num_threads(9)
    {
        cout << " n = " << n << " ";
        n *= 7;
        cout << " n = " << n << endl;
    }
    return 0;
}
