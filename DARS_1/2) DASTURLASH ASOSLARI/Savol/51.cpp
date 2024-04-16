#include <iostream>

using namespace std;

int func(int n)
{
    int s = 0;
    while (n > 0)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << func(n) << endl;
    return 0;
}