#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n;
    cout << " N = ";
    cin >> n;
#pragma omp parallel firstprivate(n) num_threads(7)
    {
        cout << " n = " << n << endl;
    }
    return 0;
}