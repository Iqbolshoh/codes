#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a, b;

#pragma omp parallel for private(a, b)
    for (int i = 0; i < 10; i++)
    {
        a = 0, b = 0;
        a++;
        b++;
        cout << "Thread " << omp_get_thread_num() << ": C = " << a + b << endl;
    }

    return 0;
}
