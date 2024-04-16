#include <iostream>

using namespace std;

class Temperatura
{
private:
    float selsiy;
    float faradey;

public:
    Temperatura() : faradey(0) {}
    void Set(float b)
    {
        selsiy = b;
    }
    void Print()
    {
        cout << " Faradey = " << faradey << endl;
    }

    friend Temperatura calculatefaradey(Temperatura &harorat);
};

Temperatura calculatefaradey(Temperatura &harorat)
{
    harorat.faradey = (harorat.selsiy * 9 / 5) + 32;
    return harorat;
}

int main()
{
    Temperatura obj1;
    obj1.Set(30);
    obj1.Print();
    obj1 = calculatefaradey(obj1);
    obj1.Print();
    return 0;
}
