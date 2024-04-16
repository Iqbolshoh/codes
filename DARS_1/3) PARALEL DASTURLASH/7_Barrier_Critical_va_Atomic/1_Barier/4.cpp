#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a = 1, b = 2, c = 3;
#pragma omp parallel num_threads(5)
    {
        a += b;
        b += c;
#pragma omp barrier
        cout << "Oqim " << omp_get_thread_num() << ": a = " << a;
        cout << ", b = " << b << ", c = " << c << endl;
    }

    return 0;
}
