#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, a, k;
    cout << "n=";
    cin >> n;

    while (n > 0)
    {
        a = n % 10;
        n = n / 10;
        k = a % 2;
        if (k == 1)
            cout << "berilgan sonda toq son bor" << endl;
    }

    return 0;
}