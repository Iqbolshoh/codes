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
    int minElement = numbers[0];
    int sum = numbers[0];
    for (int i = 1; i < N; ++i)
    {
        sum += numbers[i];
        if (numbers[i] > maxElement)
        {
            maxElement = numbers[i];
        }
        if (numbers[i] < minElement)
        {
            minElement = numbers[i];
        }
    }
    cout << "Eng katta element: " << maxElement << endl;
    cout << "Eng kichik element: " << minElement << endl;
    cout << "Eng katta va eng kichik elementlar yig'indisi: " << maxElement + minElement << endl;

    return 0;
}
