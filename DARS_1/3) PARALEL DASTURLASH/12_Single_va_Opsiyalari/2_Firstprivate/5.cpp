#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n = 5;

    #pragma omp parallel num_threads(7)
    {
        #pragma omp single firstprivate(n)
        {
            cout << " single  " << omp_get_thread_num() << ": n = " << n << endl;
            n++;
            cout << " Thread " << omp_get_thread_num() << ": n = " << n << endl;
        }
    }

    return 0;
}
