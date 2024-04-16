#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
#pragma omp parallel num_threads(7)
{
    cout << " Iqbolshoh " <<endl;
}
    return 0;
}