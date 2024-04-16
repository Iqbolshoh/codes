#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a[m][n], k;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> k;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != k - 1)
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}