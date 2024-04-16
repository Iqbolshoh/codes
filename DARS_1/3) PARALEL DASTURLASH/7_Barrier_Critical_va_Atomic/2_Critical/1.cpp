#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int sum = 0;
#pragma omp parallel num_threads(4)
    {
        int threadID = omp_get_thread_num();
        int threadSum = threadID + 1;
#pragma omp critical
        {
            sum += threadSum;
        }
    }

    cout << "Summa: " << sum << endl;

    return 0;
}
