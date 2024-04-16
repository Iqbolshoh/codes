#include <iostream>

using namespace std;

int main()
{
    int m, n, b, c, k = 0;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] < 0)
            {
                b = i;
                c = j;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            k = 0;
            if (b != i and c != j)
            {
                cout << a[i][j] << " ";
                k++;
            }
        }
        if (k != 0)
        {
            cout << endl;
        }
    }
    return 0;
}