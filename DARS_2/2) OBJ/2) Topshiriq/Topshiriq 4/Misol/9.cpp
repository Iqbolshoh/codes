#include <iostream>
#include <functional>

using namespace std;

class Logger
{
private:
    string malumot;

public:
    Logger() : malumot() {}

    void SetMalumot(const function<string()> &inputFunction)
    {
        malumot = inputFunction();
    }

    void Print()
    {
        cout << " malumot : " << malumot << endl;
    }
};

int main()
{
    Logger obj1;
    obj1.SetMalumot([]() {
        cout << "Malumotni kiriting: ";
        string input;
        cin >> input;
        return input;
    });

    obj1.Print();
    return 0;
}
