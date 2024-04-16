#include <omp.h>
#include <iostream>

using namespace std;

int main()
{
    int c = 0;

#pragma omp parallel num_threads(3)
    {
#pragma omp critical
        {
            c++;
        }

        cout << "Sodda dastur " << omp_get_thread_num() << ": " << c << endl;
    }

    return 0;
}
