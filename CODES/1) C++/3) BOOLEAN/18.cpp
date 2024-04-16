#include <iostream>

using namespace std;

int main()
{
    bool l;
    int a, b, c;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    cout << " c = ";
    cin >> c;
    l = (a == b and a == c or b == c or a == b and b == c or a == c or b == c and a == c or a == b);
    cout << l;
    return 0;
}