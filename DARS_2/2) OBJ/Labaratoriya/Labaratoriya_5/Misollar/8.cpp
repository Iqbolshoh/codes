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

    int minElement = numbers[0];
    for (int i = 1; i < N; ++i)
    {
        if (numbers[i] < minElement)
        {
            minElement = numbers[i];
        }
    }

    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        if (numbers[i] == minElement)
        {
            ++count;
        }
    }

    cout << "Eng kichik elementgacha bo'lgan elementlar soni: " << count << endl;

    return 0;
}
