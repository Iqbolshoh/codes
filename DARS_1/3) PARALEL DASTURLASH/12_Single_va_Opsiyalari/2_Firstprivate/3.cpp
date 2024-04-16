#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a = 3, b = 0;

    #pragma omp parallel num_threads(7)
    {
        #pragma omp single firstprivate(a,b)
        {
            cout << " single  " << omp_get_thread_num() << ": a = " << a << "  : b = " << b << endl;
        }
    }

    return 0;
}
