#include <iostream>

using namespace std;

int main()
{
    int n, k, x, y;
    cout << "  Uchlar soni = ";
    cin >> n;
    n = n - 1;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                a[i][j] = 0;
            }
            if (i < j)
            {
                cout << " ( A" << i + 1 << "   va   A" << j + 1 << " ) = ";
                cin >> a[i][j];
                a[j][i] = a[i][j];
            }
        }
    }
    cout << endl;
    cout << " ";
    for (int i = 0; i < n; i++)
    {
        cout << "   ";
        cout << "A" << i + 1;
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "A" << i + 1 << "  ";
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "    ";
        }
        cout << endl;
        cout << endl;
    }
    cout << " Testlar soni = ";
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cout << "X = ";
        cin >> x;
        cout << "Y = ";
        cin >> y;
        if (a[x - 1][y - 1] == 0)
        {
            cout << " Qo'shni  emas " << endl;
        }
        else
        {
            cout << " Qo'shni " << endl;
        }
    }

    return 0;
}