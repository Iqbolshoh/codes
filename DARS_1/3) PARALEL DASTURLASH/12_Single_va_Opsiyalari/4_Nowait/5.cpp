#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int c = 0;
#pragma omp parallel num_threads(7)
    {
#pragma omp single nowait
        {
            cout << " single " << c << endl;
            c++;
        }

        cout << " Boshqa oqimlar " << c << endl;
    }

    return 0;
}
