#include <iostream>

using namespace std;

int main()
{
    int n, k = 0, s = 0;
    cout << " N = ";
    cin >> n;
    while (s <= n - k - 1)
    {
        k++;
        s += k;
    }
    cout << " k = " << k << endl;
    cout << " s = " << s;
    return 0;
}