#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    float s = 0, c = 0, S = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
        c++;
        S += pow(a[i], 2);
    }
    cout << S << endl;
    printf("%.2f", s / c);
    return 0;
}