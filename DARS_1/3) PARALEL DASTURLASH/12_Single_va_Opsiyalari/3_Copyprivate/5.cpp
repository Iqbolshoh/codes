#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a = 0;

#pragma omp parallel num_threads(4)
    {
#pragma omp single copyprivate(a, b)
        {
            a = 7;
            cout << " single " << omp_get_thread_num() << ": a = " << a << endl;
            a ++;
        }

        cout << " Thread " << omp_get_thread_num() << ": a = " << a << endl;
    }

    return 0;
}
