#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int last = 0;

    #pragma omp parallel for lastprivate(last)
    for (int i = 0; i < 8; ++i)
    {
        last = i;
        cout << "Thread " << omp_get_thread_num() << ": i = " << i << endl;
    }

    cout << "Last Value: " << last << endl;

    return 0;
}
