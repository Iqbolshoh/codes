#include <omp.h>
#include <iostream>

using namespace std;

int main()
{
    omp_set_nested(1);
    int c = 0;
#pragma omp parallel num_threads(7)
    {

#pragma omp parallel num_threads(5)
        {
            c += 2;
            cout << omp_get_thread_num() << "- oqim = "  << c << endl;
        }
    }
    cout << " C = " << c;
    return 0;
}
