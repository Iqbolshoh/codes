#include <iostream>

using namespace std;

int main()
{
    bool l;
    int n;
    cout << " n = ";
    cin >> n;
    l = (n > 9 and n < 100 and n % 2 == 0);
    cout << l;
    return 0;
}