#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a, c = 0;
    cout << " a = ";
    cin >> a;
#pragma omp parallel shared(a, c) num_threads(9)
    {
        cout << a << " * " << c << " = " << a * c << endl;
        c++;
    }
    return 0;
}
