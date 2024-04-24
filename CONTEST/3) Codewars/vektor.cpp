#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Vektor yaratish
    vector<int> myVector = {1, 2, 3, 4, 5};

    // Funksiya 1: Vektor elementlarini chiqarish
    for (int i : myVector)
    {
        cout << i << " ";
    }

    // Funksiya 2: Vektorning uzunligini olish
    cout << "Vector Length: " << myVector.size() << endl;

    // Funksiya 3: Vektorga element qo'shish
    myVector.push_back(7);

    int index = 3;
    // Funksiya 4: Vektordan element o'chirish
    if (index >= 0 && index < myVector.size())
    {
        myVector.erase(myVector.begin() + index);
    }

    for (int i : myVector)
    {
        cout << i << " ";
    }
    return 0;
}
