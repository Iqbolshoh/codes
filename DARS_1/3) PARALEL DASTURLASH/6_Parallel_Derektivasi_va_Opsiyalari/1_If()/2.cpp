#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    string str;
    cout << " str = ";
    cin >> str;
    int n = str.size();
    omp_set_num_threads(n);
#pragma omp parallel if (n > 0)
    {
        cout << str << " da " << n << " ta belgi bor " << endl;
    }
    return 0;
}
