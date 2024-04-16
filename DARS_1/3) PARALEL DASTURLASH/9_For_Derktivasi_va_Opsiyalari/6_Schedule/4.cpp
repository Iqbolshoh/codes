#include <iostream>
#include <omp.h>

using namespace std;

int main()
{

#pragma omp parallel num_threads(3)
    {

#pragma omp for schedule(dynamic, 3)

        for (int i = 0; i < 15; i++)
        {
            cout << omp_get_thread_num() << " - dynamic oqim " << " Iteratsiya raqami = " << i << endl;
        }
    }
    return 0;
}
