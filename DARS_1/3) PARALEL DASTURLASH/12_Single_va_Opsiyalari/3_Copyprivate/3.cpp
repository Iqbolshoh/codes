#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a = 0, b = 0;

#pragma omp parallel num_threads(8)
    {
#pragma omp single copyprivate(a, b)
        {
            a = omp_get_thread_num();
            b = a + 1;
            cout << " single " << omp_get_thread_num() << ": a = " << a << "  : b = " << b << endl;
        }

        cout << " Thread " << omp_get_thread_num() << ": a = " << a << "  : b = " << b << endl;
    }

    return 0;
}
