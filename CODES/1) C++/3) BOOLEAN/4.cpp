#include <iostream>

using namespace std;

int main()
{
    bool l;
    int a, b;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    l = (a > 2 and b <= 3);
    cout << l;
    return 0;
}