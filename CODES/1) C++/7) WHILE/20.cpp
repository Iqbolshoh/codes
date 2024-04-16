#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            cout << " Bor " << endl;
            return 0;
        }
        n = n / 10;
    }
    cout << " Yo'q " << endl;
    return 0;
}