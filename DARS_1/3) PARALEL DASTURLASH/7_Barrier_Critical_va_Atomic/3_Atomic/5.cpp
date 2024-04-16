#include <omp.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;

#pragma omp parallel num_threads(7)
    {
#pragma omp atomic
        a++;

#pragma omp atomic
        b++;

#pragma omp atomic
        c = a * b;

        cout << "Sodda dastur " << omp_get_thread_num() << ": ";
        cout << a << " " << b << " " << c << " " << endl;
    }

    return 0;
}
