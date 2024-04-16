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
#pragma omp parallel shared(a, b) num_threads(7)
    {
        cout << omp_get_thread_num() << " - Oqim a = " << a;
        cout << "  b = " << b << endl;
        a++;
        b += 2;
    }
    return 0;
}
