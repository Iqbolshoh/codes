#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n = 0;
    
    #pragma omp parallel for firstprivate(n)
    for (int i = 0; i < 10; i++)
    {
        n+=2;
        cout << "Thread " << omp_get_thread_num() << ": N = " << n << endl;
    }

    return 0;
}
