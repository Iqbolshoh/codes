#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n;

    #pragma omp parallel num_threads(5)
    {
        #pragma omp single private(n)
        {
            n = 8;
            cout << " single  " << omp_get_thread_num() << ": n = " << n << endl;
        }
    }

    return 0;
}
