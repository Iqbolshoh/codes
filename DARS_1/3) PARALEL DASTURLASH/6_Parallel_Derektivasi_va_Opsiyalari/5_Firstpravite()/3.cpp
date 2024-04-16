#include <iostream>
#include <math.h>
#include <omp.h>

using namespace std;

int main()
{
    int a = 7, b = 5;
#pragma omp parallel firstprivate(a, b) num_threads(9)
    {
        cout << " a = " << a << "   b = " << b << endl;
        a++;
        b--;
        cout << " a = " << a << "   b = " << b << endl;
        cout << endl;
    }
    return 0;
}
