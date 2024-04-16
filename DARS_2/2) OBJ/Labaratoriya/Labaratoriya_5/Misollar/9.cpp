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
    for (int i = 1; i < N; ++i)
    {
        if (numbers[i] > maxElement)
        {
            maxElement = numbers[i];
        }
    }

    int count = 0;
    for (int i = 0; i < N; ++i)
    {
        if (numbers[i] > maxElement)
        {
            ++count;
        }
    }

    cout << "Eng katta elementdan keyin kelgan elementlar soni: " << count << endl;

    return 0;
}
