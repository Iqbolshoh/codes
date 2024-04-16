#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a, b;

    #pragma omp parallel num_threads(7)
    {
        #pragma omp single private(a,b)
        {
            a = 3, b = 0;
            cout << " single " << omp_get_thread_num() << ": a = " << a << "  : b = " << b << endl;
        }
        cout << " Thread " << omp_get_thread_num() << ": a = " << a << "  : b = " << b << endl;
    }

    return 0;
}
