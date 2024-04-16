#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int sum = 0;
#pragma omp parallel num_threads(10)
    {
        int threadID = omp_get_thread_num();
        int threadSum = threadID + 1;
#pragma omp atomic
        sum += threadSum;
    }

    cout << "Jami: " << sum << endl;

    return 0;
}