#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a = 0, b = 0;

#pragma omp parallel for firstprivate(a, b)
    for (int i = 0; i < 10; i++)
    {
        a++;
        b++;
        cout << "Thread " << omp_get_thread_num() << ": C = " << a + b << endl;
    }

    return 0;
}
