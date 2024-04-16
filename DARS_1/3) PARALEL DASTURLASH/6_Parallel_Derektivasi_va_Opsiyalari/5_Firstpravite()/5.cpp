#include <iostream>
#include <math.h>
#include <omp.h>

using namespace std;

int main()
{
    char ch1 = '!', ch2 = '#';
#pragma omp parallel firstprivate(ch1, ch2) num_threads(9)
    {
        cout << " ch1 = " << ch1 << "   ch2 = " << ch2 << endl;
        cout << endl;
    }
    return 0;
}
