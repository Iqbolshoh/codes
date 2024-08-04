#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    for (int i = b - 1; i > a; i--)
    {
        cout << i << " ";
    }
    return 0;
}