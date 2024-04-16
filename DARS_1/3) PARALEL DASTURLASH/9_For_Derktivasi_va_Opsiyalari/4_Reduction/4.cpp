#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n = 1;

    #pragma omp parallel for reduction(*:n) num_threads(7)
    for (int i = 1; i < 7; ++i)
    {
        n *= 2;
    }

    cout << "N = " << n << endl;

    return 0;
}
