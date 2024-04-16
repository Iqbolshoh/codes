#include <iostream>
#include <math.h>
#include <omp.h>

using namespace std;

int main()
{
    char a = '*';
#pragma omp parallel private(a) num_threads(9)
    {
        a = 'b';
        cout << " a = " << a << endl;
    }
    return 0;
}
