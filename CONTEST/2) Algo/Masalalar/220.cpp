#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n, indexMAX, indexMIN;
    cin >> n;
    int MAX, MIN, arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (i == 0)
        {
            MAX = arr[i];
            indexMAX = i;
            MIN = arr[i];
            indexMIN = i;
        }
        if (arr[i] > MAX)
        {
            MAX = arr[i];
            indexMAX = i;
        }
        if (arr[i] < MIN)
        {
            MIN = arr[i];
            indexMIN = i;
        }
    }
    arr[indexMAX] = MIN;
    arr[indexMIN] = MAX;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
