#include <iostream>
#include <omp.h>

using namespace std;

int main()
{

#pragma omp parallel num_threads(4)
    {

#pragma omp for schedule(guided, 4)

        for (int i = 0; i < 10; i++)
        {
            cout << omp_get_thread_num() << " - guided oqim " << " Iteratsiya raqami = " << i << endl;
        }
    }
    return 0;
}
