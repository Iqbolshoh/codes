#include <omp.h>
#include <iostream>

using namespace std;

int main()
{
    omp_set_nested(1);
#pragma omp parallel num_threads(5)
    {
        int c = 0;

#pragma omp parallel num_threads(2)
        {
#pragma omp atomica
            c++;

            cout << "Ichki parallellik: " << omp_get_thread_num() << ": " << c << endl;
        }

        cout << "Birinchi parallellik: Dastur " << omp_get_thread_num() << ": " << c << endl;
    }

    return 0;
}
