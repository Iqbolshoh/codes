#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    const int n = 10;
    int a[n] = {0};

    #pragma omp parallel num_threads(4)
    {
        #pragma omp for schedule(static, 2)
        for (int i = 0; i < n; ++i)
        {
            a[i] = omp_get_thread_num();
            cout << "Thread " << omp_get_thread_num() << ": a[" << i << "] = " << a[i] << endl;
        }
    }

    return 0;
}
