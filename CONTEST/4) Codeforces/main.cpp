#include <iostream>

using namespace std;

int main()
{
    long long n, a, b, c, x, y, z;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        c = max(x, y);
        a = min(x, z);
        b = x + y + z - a - c;
        if (c > b){
            cout << "YES" << endl;
            cout << a << " " << a << " " << b << endl;   
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
