#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n = 1;

    #pragma omp parallel for reduction(*:n) num_threads(4)
    for (int i = 1; i < 10; ++i)
    {
        n *= i;
    }

    cout << "N = " << n << endl;

    return 0;
}
