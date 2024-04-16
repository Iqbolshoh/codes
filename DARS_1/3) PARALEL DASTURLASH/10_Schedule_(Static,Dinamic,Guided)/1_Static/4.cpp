#include <iostream>
#include <omp.h>

using namespace std;

int main()
{

#pragma omp parallel num_threads(3)
    {

#pragma omp for schedule(static, 4)

        for (int i = 0; i < 18; i++)
        {
            cout << omp_get_thread_num() << " - static oqim " << " Iteratsiya raqami = " << i << endl;
        }
    }
    return 0;
}
