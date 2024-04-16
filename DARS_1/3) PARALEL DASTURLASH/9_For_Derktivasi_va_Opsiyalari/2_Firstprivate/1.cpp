#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    char ch = '1';

#pragma omp parallel for firstprivate(ch)
    for (int i = 0; i < 10; i++)
    {
        cout << "Thread " << omp_get_thread_num() << ": Char = " << ch << endl;
    }

    return 0;
}
