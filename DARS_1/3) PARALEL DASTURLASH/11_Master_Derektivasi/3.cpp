#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int c = 0;
#pragma omp parallel num_threads(5)
    {
#pragma omp master
        {
            cout << "Master hududda c = " << c << endl;
            c++;
        }

        cout << "Master bo'lmagan oqimda c = " << c << endl;
    }

    return 0;
}
