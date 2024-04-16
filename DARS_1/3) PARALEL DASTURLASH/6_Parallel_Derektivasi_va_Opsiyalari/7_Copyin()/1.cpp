#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int x = 10;

    #pragma omp parallel copyin(x)
    {
        cout << "Thread ID: " << omp_get_thread_num() << ", x: " << x << endl;
    }

    return 0;
}
