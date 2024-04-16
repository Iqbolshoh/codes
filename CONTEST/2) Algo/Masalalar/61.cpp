#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double s = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s = s + (sin(i)) / pow(2, i);
    }
    printf("%.2f", s);
    return 0;
}