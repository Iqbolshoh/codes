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
    int n = 3;
    Car obj[n];

    obj[0].brend = "Chevrolet";
    obj[0].model = "Malibu";
    obj[0].year = 2020;

    obj[1].brend = "BMW";
    obj[1].model = "X7";
    obj[1].year = 2017;

    obj[2].brend = "BYD";
    obj[2].model = "Xan";
    obj[2].year = 2023;

    for (int i = 0; i < n; i++)
    {
        print(obj[i].brend, obj[i].model, obj[i].year);
    }
    return 0;
}