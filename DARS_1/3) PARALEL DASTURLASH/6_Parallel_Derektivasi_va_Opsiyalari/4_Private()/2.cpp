#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n;
#pragma omp parallel private(n) num_threads(10)
    {
        n = 5;
        cout << " n = " << n;
        n = n + 1;
        cout << " n = " << n <<endl;
    }
    return 0;
}
