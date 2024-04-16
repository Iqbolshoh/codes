#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int p = 0;

    #pragma omp parallel num_threads(4)
    {
        #pragma omp single private(p)
        {
            p = omp_get_thread_num();
            cout << " single " << omp_get_thread_num() << ": p = " << p << endl;
        }

        cout << " Thread " << omp_get_thread_num() << ": p = " << p << endl;
    }

    return 0;
}
