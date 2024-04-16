#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float min1 = 0, min2 = 0, s;
    cout << "n = ";
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        cout << i << " = ";
        cin >> s;
        if (i == 1)
        {
            min1 = s;
            min2 = s;
        }
        if ((s < min2) && (s != min1))
        {
            if (s < min1)
            {
                min2 = min1;
                min1 = s;
            }
            else
                min2 = s;
        }
        if (min1 == min2)
            min2 = s;
    }
    cout << min1 << min2 << endl;
    return 0;
}