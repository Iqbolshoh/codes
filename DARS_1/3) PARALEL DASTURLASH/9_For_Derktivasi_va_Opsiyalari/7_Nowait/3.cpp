#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    #pragma omp parallel num_threads(7)
    {
        #pragma omp for nowait
        for (int i = 0; i < 5; ++i)
        {
           cout << "Thread " << omp_get_thread_num() << ": i = " << i <<endl;
        }

       cout << "Thread " << omp_get_thread_num() << ": Keyin" <<endl;
    }

    return 0;
}
