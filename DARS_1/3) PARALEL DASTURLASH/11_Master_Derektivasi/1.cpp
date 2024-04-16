#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    #pragma omp parallel
    {
        #pragma omp master
        {
            cout << "Master Thread = " << omp_get_thread_num() << endl;
        }

        cout << "Master bo'lmagan oqim Thread = " << omp_get_thread_num() << endl;
    }

    return 0;
}
