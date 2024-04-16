#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
#pragma omp parallel num_threads(8)
    {
        cout << omp_get_thread_num() << " - Oqim " << endl;
    }
    return 0;
}
