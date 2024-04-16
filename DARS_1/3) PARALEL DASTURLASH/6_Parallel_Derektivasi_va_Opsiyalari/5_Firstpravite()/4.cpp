#include <iostream>
#include <math.h>
#include <omp.h>

using namespace std;

int main()
{
    string str1 = " Iqbolshoh ", str2 = " I ";
#pragma omp parallel firstprivate(str1, str2) num_threads(9)
    {
        cout << " str1 = " << str1 << "   str2 = " << str2 << endl;
        cout << endl;
    }
    return 0;
}
