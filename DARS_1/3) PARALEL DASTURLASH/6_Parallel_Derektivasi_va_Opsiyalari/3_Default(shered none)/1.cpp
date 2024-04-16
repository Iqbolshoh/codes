#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n;
    cout << " N = ";
    cin >> n;
#pragma omp parallel num_threads(9)
    {
        cout << " n = " << n <<endl;
        n ++;
    }
    return 0;
}