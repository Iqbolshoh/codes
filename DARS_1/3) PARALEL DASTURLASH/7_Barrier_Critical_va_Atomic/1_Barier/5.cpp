#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a = 1, b = 2, c = 3;

#pragma omp parallel num_threads(4)
    {
        int ID = omp_get_thread_num();

        a += ID;
        b += ID;
        c += ID;

#pragma omp barrier

        cout << "O'qim " << ID << ": a = " << a << ", b = " << b << ", c = " << c << endl;
    }

    return 0;
}
