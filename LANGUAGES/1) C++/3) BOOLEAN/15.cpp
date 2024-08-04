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
    l = (a > 0 and b > 0 and c <= 0 or a <= 0 and b > 0 and c > 0 or a > 0 and b <= 0 and c > 0);
    cout << l;
    return 0;
}