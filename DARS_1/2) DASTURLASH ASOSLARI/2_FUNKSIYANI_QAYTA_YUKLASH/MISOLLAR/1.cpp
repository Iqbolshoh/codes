#include <iostream>

using namespace std;

int func(int n)
{
    for (int i = 3; i < n; i += 2)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    int n;
    cout << "n = ";
    cin >> n;
    int i = func(n);

    if (n != 1 and i != n)
    {
        cout << n << " ning eng kichik toq natural bo'luvchi = " << i << endl;
    }
    else
    {
        cout << n << " ning eng kichik toq natural bo'luvchi yo'q ";
    }

    return 0;
}
