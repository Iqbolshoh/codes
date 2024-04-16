#include <omp.h>
#include <iostream>

using namespace std;

int main()
{
    omp_set_nested(1);
    int a = 1, b = 3, c;
#pragma omp parallel num_threads(5)
    {

#pragma omp parallel num_threads(4)
        {
            a++;
            b++;
            c = a * b;
            cout << omp_get_thread_num() << "- oqim = " << c << endl;
        }
    }
    cout << " c = " << c;
    return 0;
}