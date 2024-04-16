#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a = 7;
    omp_set_num_threads(5);
#pragma omp parallel reduction(+ : a)
    {
        a += 2;
    }
    cout << a;
    return 0;
}
