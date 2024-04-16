#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n;

#pragma omp parallel for private(n)
    n = 0;
    for (int i = 0; i < 10; i++)
    {
        n += 2;
        cout << "Thread " << omp_get_thread_num() << ": N = " << n << std::endl;
    }

    return 0;
}
