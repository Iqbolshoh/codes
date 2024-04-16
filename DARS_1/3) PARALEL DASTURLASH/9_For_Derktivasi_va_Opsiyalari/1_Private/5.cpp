#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    char ch;

#pragma omp parallel for private(ch)
    for (int i = 0; i < 10; i++)
    {
        ch = '!';

        cout << "Thread " << omp_get_thread_num() << ": Char = " << ch << endl;
    }

    return 0;
}
