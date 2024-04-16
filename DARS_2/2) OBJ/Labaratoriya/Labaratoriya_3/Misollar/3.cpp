#include <iostream>

using namespace std;

template <typename T>
void engKattaIndeksi(T arr[], int n, int &index, T &maxVal)
{
    maxVal = arr[0];
    index = 0;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            index = i;
        }
    }
}

template <typename T>
T umumiyYigindisi(T arr[], int n)
{
    T sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    const int N = 3;
    int arr[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int index;
    int maxVal;

    for (int i = 0; i < N; ++i)
    {
        engKattaIndeksi(arr[i], N, index, maxVal);
        cout << "Qator #" << i + 1 << "ning eng katta elementi: " << maxVal << " (Indeks: " << index << ")" << endl;
    }

    int totalSum = 0;
    for (int i = 0; i < N; ++i)
    {
        totalSum += arr[i][index];
    }
    cout << "Indekslardagi elementlar umumiy yig'indisi: " << totalSum << endl;

    return 0;
}
