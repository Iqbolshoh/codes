#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int n;
    cout << " Oqim raqami = ";
    cin >> n;
#pragma omp parallel firstpravite(n) num_threads(n)
    {
        cout << omp_get_thread_num() << " - Oqim " << endl;
    }
    return 0;
}
