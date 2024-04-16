#include <iostream>

using namespace std;

int main()
{
    bool l;
    int yuz, on, bir, n;
    cout << " n = ";
    cin >> n;
    yuz = n / 100;
    on = n / 10 % 10;
    bir = n % 10;
    l = (yuz < on and on < bir or bir < on and on < yuz);
    cout << l;
    return 0;
}