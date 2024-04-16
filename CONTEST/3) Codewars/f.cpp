#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        float n;
        cin >> n;
        int a = n / 2;
        float b = n / 2;
        if (a != b)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << " " << a << endl;
        }
    }
    return 0;
}