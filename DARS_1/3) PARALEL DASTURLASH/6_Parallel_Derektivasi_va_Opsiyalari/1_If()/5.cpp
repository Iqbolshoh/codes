#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n;
    cout << " n = ";
    cin >> n;
    omp_set_num_threads(n);
#pragma omp parallel shared(n) if (n > 1)
    {
        cout << omp_get_num_threads() << " Ta oqim soni " <<endl;
    }
    return 0;
}
