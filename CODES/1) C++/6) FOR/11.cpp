#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, s = 0;
    cout << " N = ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        s += pow(i + n, 2);
    }
    cout << " Yigindi = " << s;
    return 0;
}