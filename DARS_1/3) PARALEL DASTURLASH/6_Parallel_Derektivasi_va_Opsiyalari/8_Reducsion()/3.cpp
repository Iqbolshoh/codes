#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a = 1, b = 1, n;
    cout << " N = ";
    cin >> n;
    omp_set_num_threads(n);
#pragma omp parallel reduction(* : a)
    {
        a *= b;
        b++;
    }
    cout << " N! = " << a;
    return 0;
}
