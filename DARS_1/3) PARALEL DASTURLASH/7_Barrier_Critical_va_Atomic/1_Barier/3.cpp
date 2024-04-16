#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int result = 0;
#pragma omp parallel num_threads(7)
    {
        int threadID = omp_get_thread_num();
        int threadResult = threadID * 2;
        result += threadResult;
#pragma omp barrier
        cout << "Oqim " << threadID << ": Natija = " << result << endl;
    }

    return 0;
}
