#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    #pragma omp parallel
    {
        #pragma omp for ordered
        for (int i = 0; i < 10; ++i)
        {
            #pragma omp ordered
            {
                cout << "Thread " << omp_get_thread_num() << ": i = " << i << endl;
            }
        }
    }

    return 0;
}
