#include <omp.h>
#include <iostream>

using namespace std;

int main()
{
    omp_set_nested(1);
    int c = 0;
#pragma omp parallel num_threads(5)
    {

#pragma omp parallel num_threads(2)
        {
#pragma omp atomic
            c++;
            cout << omp_get_thread_num() << "- oqim = "  << c << endl;
        }
    }
    cout << " C = " << c;
    return 0;
}
