#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    #pragma omp parallel copyin(a)
    {
        int i = omp_get_thread_num();
        cout << "Thread ID: " << i << ", a[" << i << "]: " << a[i] << endl;
    }

    return 0;
}
