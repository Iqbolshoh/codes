#include <iostream>

using namespace std;

struct mashina
{
    string brend;
    string model;
    int narx;
};

int main()
{
    mashina a[3];

    a[0].brend = " Tesla ";
    a[0].model = " model S ";
    a[0].narx = 110000;

    a[1].brend = " BMW ";
    a[1].model = " M5 ";
    a[1].narx = 105000;

    a[2].brend = " Malibu ";
    a[2].model = " R3 ";
    a[2].narx = 35000;

    for (int i = 0; i < 3; i++)
    {
        cout << " Mashina brendi: " << a[i].brend << endl;
        cout << " Mashina Modeli: " << a[i].model << endl;
        cout << " Mashina Narxi = " << a[i].narx << " $ " << endl;
        cout << endl;
    }

    return 0;
}