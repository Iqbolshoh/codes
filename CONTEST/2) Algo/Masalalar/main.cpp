#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int n, max;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            max = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] /= max;
        cout << fixed << setprecision(2) << arr[i] << endl;
    }
    return 0;
}
