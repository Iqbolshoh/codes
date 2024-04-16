#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a = 3;
    omp_set_num_threads(7);
#pragma omp parallel reduction(* : a)
    {
        a *= 2;
    }
    cout << " a = " << a;
    return 0;
}
