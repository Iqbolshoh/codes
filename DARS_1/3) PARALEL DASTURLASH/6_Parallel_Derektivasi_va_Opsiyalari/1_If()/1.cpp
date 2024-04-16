#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
#pragma omp parallel if(1) num_threads(4)
{
    cout << " Iqbolshoh " <<endl;
}
    return 0;
}
