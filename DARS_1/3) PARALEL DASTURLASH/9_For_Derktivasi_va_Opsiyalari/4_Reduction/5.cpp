#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int sum = 0;

    #pragma omp parallel for reduction(+:sum) num_threads(4)
    for (int i = 0; i < 15; ++i)
    {
        sum += i;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
