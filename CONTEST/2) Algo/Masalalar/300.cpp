#include <iostream>

using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    if (n % 2 == 0 and n % 3 == 0)
    {
        cout << "double";
        c++;
    }
    if (n % 2 == 0 and c == 0)
    {
        cout << 2;
    }
    if (n % 3 == 0 and c == 0)
    {
        cout << 3;
    }
    if (n % 2 != 0 and n % 3 != 0)
    {
        cout << "none";
    }
    return 0;
}