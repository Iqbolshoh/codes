#include <iostream>
#include <math.h>
#include <omp.h>

using namespace std;

int main()
{
    int n;
#pragma omp parallel private(n) num_threads(9)
    {
        n = omp_get_thread_num();
        cout << " n = " << n << " ";
        n *= 7;
        cout << " n = " << n << endl;
    }
    return 0;
}
