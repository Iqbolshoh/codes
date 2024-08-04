#include <iostream>

using namespace std;

int main()
{
    bool l;
    int yuz, bir, n;
    cout << " n = ";
    cin >> n;
    yuz = n / 100;
    bir = n % 10;
    l = (yuz == bir);
    cout << l;
    return 0;
}