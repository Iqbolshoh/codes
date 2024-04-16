#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
#pragma omp parallel num_threads(6)
    {
        cout << "Oqim" << endl;
#pragma omp barrier
        cout << "Ushbu qator, barcha oqimlar barrierdan keyin chiqadi" << endl;
    }

    return 0;
}
