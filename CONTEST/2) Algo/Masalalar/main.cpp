#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double arr[n], min, a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            min = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cin >> a >> b;
    for (int i = a - 1; i < b; i++)
    {
        arr[i] /= min;
    }
    for (int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(1) << arr[i] << " ";
    }
    return 0;
}