#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n = 7;

    #pragma omp parallel
    {
        #pragma omp single firstprivate(n) nowait
        {
            cout << "Thread " << omp_get_thread_num() << ": n = " << n << endl;
            n++;
        }
        cout << "Thread " << omp_get_thread_num() << ": n = " << n << endl;
    }

    return 0;
}
