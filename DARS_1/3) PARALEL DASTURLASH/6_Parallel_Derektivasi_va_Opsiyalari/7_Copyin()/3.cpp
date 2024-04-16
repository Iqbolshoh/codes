#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    float pi = 3.14159;

    #pragma omp parallel copyin(pi)
    {
        cout << "Thread ID: " << omp_get_thread_num() << ", pi: " << pi << endl;
    }

    return 0;
}
