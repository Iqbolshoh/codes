#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
}

int main()
{

    int n;
    cin >> n;
    cout << n << ' ';

    while (n > 1)
    {
        n = solve(n);
        cout << n << ' ';
    }

    return 0;
}