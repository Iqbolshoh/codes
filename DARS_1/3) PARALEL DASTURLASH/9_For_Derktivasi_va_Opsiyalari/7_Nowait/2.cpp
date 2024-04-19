#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    #pragma omp parallel num_threads(5)
    {
        #pragma omp for nowait
        for (int i = 0; i < 3; ++i)
        {
           cout << "Thread " << omp_get_thread_num() << ": i = " << i <<endl;
        }

       cout << "Thread " << omp_get_thread_num() << ": Keyin" <<endl;
    }

    return 0;
}