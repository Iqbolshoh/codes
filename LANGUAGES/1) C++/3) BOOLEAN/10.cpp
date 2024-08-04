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
    l = (a % 2 != b % 2);
    cout << l;
    return 0;
}