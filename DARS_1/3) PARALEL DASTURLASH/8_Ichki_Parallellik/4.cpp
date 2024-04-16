#include <omp.h>
#include <iostream>

using namespace std;

int main()
{
    omp_set_nested(1);
    int a = 1, b = 0;
#pragma omp parallel num_threads(7)
    {

#pragma omp parallel num_threads(5)
        {
            a += b;
            b += 2;
            cout << omp_get_thread_num() << "- oqim = " << a << endl;
        }
    }
    cout << " a = " << a;
    return 0;
}