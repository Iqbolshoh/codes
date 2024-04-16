#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a, b;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
#pragma omp parallel shared(a, b) num_threads(5)
    {
        cout << " a + b = " << a + b <<endl;
        a++;
        b++;
    }
    return 0;
}
