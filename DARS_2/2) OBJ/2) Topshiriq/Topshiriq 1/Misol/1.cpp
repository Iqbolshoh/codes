#include <iostream>

using namespace std;

void print(string brend, string model, int price)
{
    cout << " Brend : " << brend << endl;
    cout << " Model : " << model << endl;
    cout << " Prise : " << price << " $" << endl;
}

class Car
{
private:
    string brend;
    string model;
    int price;

public:
    Car(string a, string b, int c)
    {
        brend = a;
        model = b;
        price = c;
    }

    string Get1()
    {
        return brend;
    }
    string Get2()
    {
        return model;
    }
    int Get3()
    {
        return price;
    }
};

int main()
{
    Car obj1("Tesla", "S", 74990);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}
//NATIJA: