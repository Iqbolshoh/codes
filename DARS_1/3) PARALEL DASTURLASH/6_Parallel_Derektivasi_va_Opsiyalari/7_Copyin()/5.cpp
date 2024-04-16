#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    char a[] = "Hello";

    #pragma omp parallel copyin(a)
    {
        int index = omp_get_thread_num();
        cout << "Thread ID: " << index << ", a: " << a << endl;
    }

    return 0;
}
