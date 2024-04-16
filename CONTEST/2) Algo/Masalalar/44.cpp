#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if (a + b > c and a + c > b and b + c > a)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
