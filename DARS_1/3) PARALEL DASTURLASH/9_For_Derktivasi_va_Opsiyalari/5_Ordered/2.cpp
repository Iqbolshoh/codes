#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    #pragma omp parallel num_threads(5)
    {
        #pragma omp for ordered
        for (int i = 0; i < 5; ++i)
        {
            #pragma omp ordered
            {
                cout << "Thread " << omp_get_thread_num() << ": index = " << i << endl;
            }
        }
    }

    return 0;
}
