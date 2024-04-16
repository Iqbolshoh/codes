#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int a;
    cout << " a = ";
    cin >> a;
    omp_set_num_threads(5);
#pragma omp parallel shared(a) if (a %2 == 1)
    {
        cout << a << " Soni toq " << endl;
    }
    return 0;
}
