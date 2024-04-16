#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    #pragma omp parallel num_threads(4)
    {
        #pragma omp single nowait
        {
            cout << " single " << endl;
        }

        cout << " Boshqa oqimlar " << endl;
    }

    return 0;
}
