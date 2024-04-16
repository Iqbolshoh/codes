#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    cout << "N ni kiriting: ";
    cin >> N;

    vector<int> numbers(N);

    cout << "Butun sonlarni kiriting:\n";
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }

    int maxElement = numbers[0];
    int maxIndex = 0;
    for (int i = 1; i < N; ++i)
    {
        if (numbers[i] > maxElement)
        {
            maxElement = numbers[i];
            maxIndex = i;
        }
    }

    int nextMax = INT_MIN;
    int nextMaxIndex = -1;
    for (int i = maxIndex + 1; i < N; ++i)
    {
        if (numbers[i] > nextMax)
        {
            nextMax = numbers[i];
            nextMaxIndex = i;
        }
    }

    if (nextMaxIndex != -1)
    {
        cout << "Eng katta elementdan keyin kelgan element: " << nextMax << " (indeks: " << nextMaxIndex << ")\n";
    }
    else
    {
        cout << "Eng katta elementdan keyin kelgan element mavjud emas.\n";
    }

    return 0;
}
