#include <iostream>

using namespace std;

int EKUK(int a, int b)
{
    int ekuk = 1;
    for (int i = 1; i <= a and i <= b; i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            ekuk = i;
        }
    }
    return (a * b) / ekuk;
}

int func(int a[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    int b = a[0];
    for (int i = 1; i < n; i++)
    {
        b = EKUK(a[i], b);
    }
    return b;
}

int main()
{
    int n;
    cout << " N = ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " - son = ";
        cin >> a[i];
    }

    cout << "EKUK = " << func(a, n);

    return 0;
}
