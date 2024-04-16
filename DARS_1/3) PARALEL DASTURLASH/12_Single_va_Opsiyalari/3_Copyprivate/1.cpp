#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n = 0;

    #pragma omp parallel num_threads(4)
    {
        #pragma omp single copyprivate(n)
        {
            n = omp_get_thread_num();
            cout << " single " << omp_get_thread_num() << ": n = " << n << endl;
        } 

        cout << "Thread " << omp_get_thread_num() << ": n = " << n << endl;
    }

    return 0;
}
