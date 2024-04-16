#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int value = 5;

    #pragma omp parallel copyin(value)
    {
        value += omp_get_thread_num();
       cout << "Thread ID: " << omp_get_thread_num() << ", value: " << value <<endl;
    }

    return 0;
}
