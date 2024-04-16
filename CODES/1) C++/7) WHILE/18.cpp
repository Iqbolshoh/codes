#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, a = 0;
    cout << "n=";
    cin >> n;

    while (n > 0)
    {
        a = a * 10 + (n % 10);
        n = n / 10;
    }

    cout << a;

    return 0;
}