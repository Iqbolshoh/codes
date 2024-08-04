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
    l = (a % 2 == 1 and b % 2 == 1);
    cout << l;
    return 0;
}