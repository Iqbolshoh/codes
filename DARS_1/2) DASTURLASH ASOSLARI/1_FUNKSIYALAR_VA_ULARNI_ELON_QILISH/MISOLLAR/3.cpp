#include <iostream>

using namespace std;

int EKUB(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return EKUB(b, a % b);
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
        b = EKUB(a[i], b);
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

    cout << "EKUB = " << func(a, n);

    return 0;
}
