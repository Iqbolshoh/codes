#include <iostream>

using namespace std;

int func(int n)
{
    int t = 0, c = 0;
    while (n > 0)
    {
        t = t * 10 + n % 10;
        n /= 10;
    }
    return t;
}

int main()
{
    int n;
    cout << " N = ";
    cin >> n;
    cout << n << " ning Teskarisi " << func(n);
    return 0;
}