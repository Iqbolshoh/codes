#include <iostream>

using namespace std;

void print(string brend, string model, int year)
{
    cout << " rend : " << brend << endl;
    cout << " Model : " << model << endl;
    cout << " Year : " << year << endl;
    cout << endl;
}

class Car
{
public:
    string brend;
    string model;
    int year;
};

int main()
{
    Car obj1;
    Car obj2;
    Car obj3;

    obj1.brend = "Chevrolet";
    obj1.model = "Malibu";
    obj1.year = 2020;

    obj2.brend = "BMW";
    obj2.model = "X7";
    obj2.year = 2017;

    obj3.brend = "BYD";
    obj3.model = "Xan";
    obj3.year = 2023;

    print(obj1.brend, obj1.model, obj1.year);
    print(obj2.brend, obj2.model, obj2.year);
    print(obj3.brend, obj3.model, obj3.year);
    return 0;
}