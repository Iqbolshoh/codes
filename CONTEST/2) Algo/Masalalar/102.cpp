#include <iostream>

using namespace std;

int main()
{
    int n, k, l;
    cin >> n;

    float s = 0, min_element;
    float a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            min_element = a[0];
        }
        else if (min_element > a[i])
        {
            min_element = a[i];
        }
    }
    cin >> k >> l;

    if (k < 1 || l > n || k > l)
    {
        return 1;
    }

    for (int i = k - 1; i < l; i++)
    {
        a[i] = a[i] / min_element;
    }

    for (int i = 0; i < n; i++)
    {
        s = a[i];
        printf("%.1f", s);
        cout << " ";
    }

    return 0;
}
