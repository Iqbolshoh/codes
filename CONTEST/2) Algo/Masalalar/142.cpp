#include <iostream>

using namespace std;

int main()
{
    int n, m, min, max;
    cin >> n;
    m = n * (n + 2) / 2;
    int a[n][n], b[m], c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j or i == j)
            {
                b[c] = a[i][j];
                c++;
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        if (i == 0)
        {
            min = b[0];
            max = b[0];
        }
        if (min > b[i])
        {
            min = b[i];
        }
        if (max < b[i])
        {
            max = b[i];
        }
    }
    for (int i = 0; i < c; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl
         << max << " " << min;
    return 0;
}
