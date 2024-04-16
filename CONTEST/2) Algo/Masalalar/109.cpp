#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], m;
    double S = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (m < a[i])
        {
            S *= a[i];
        }
    }
    S = log(S);
    printf("%.2f", S);
}