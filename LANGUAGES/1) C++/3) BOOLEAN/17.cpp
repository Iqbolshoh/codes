#include <iostream>

using namespace std;

int main()
{
    bool l;
    int n;
    cout << " n = ";
    cin >> n;
    l = (n > 99 and n < 1000 and n % 2 == 1);
    cout << l;
    return 0;
}