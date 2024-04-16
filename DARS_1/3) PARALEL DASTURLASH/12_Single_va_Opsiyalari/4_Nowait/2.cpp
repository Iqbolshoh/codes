#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n = 8;

    #pragma omp parallel num_threads(5)
    {
        #pragma omp single firstprivate(n) nowait
        {
            cout << "Thread " << omp_get_thread_num() << ": n = " << n << endl;
        }
        cout << "Thread " << omp_get_thread_num() << ": n = " << n << endl;
    }

    return 0;
}
