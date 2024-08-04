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
    l = (a <= b and b <= c);
    cout << l;
    return 0;
}