#include <iostream>
#include <math.h>
#include <omp.h>

using namespace std;

int main()
{
    int c = 1;
#pragma omp parallel num_threads(9) 
    {
        cout << omp_get_thread_num() << " - oqim  = " << pow(c, 2) << endl;
        c++;
    }
    return 0;
}
