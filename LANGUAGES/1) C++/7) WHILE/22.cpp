#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i = 2, c = 0;
    cin >> n;

    while (i < n)
    {
        cout << i << " ";

        if (n % i == 0)
        {
            cout << "murakkab son";
            return 0;
        }
        i++;
    }
    cout << "tub son";
    return 0;
}