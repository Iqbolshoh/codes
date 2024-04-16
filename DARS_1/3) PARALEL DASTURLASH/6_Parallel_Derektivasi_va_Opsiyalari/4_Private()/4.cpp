#include <iostream>
#include <math.h>
#include <omp.h>

using namespace std;

int main()
{
    int a;
#pragma omp parallel private(a) num_threads(9)
    {
        a = 1;
        cout << " a = " << a << " ";
        a *= 5;
        cout << " a = " << a << endl;
    }
    return 0;
}
