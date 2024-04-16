#include <iostream>

using namespace std;

void print(string brendi, string turi, int narxi)
{
    cout << " Brendi : " << brendi << endl;
    cout << " Turi : " << turi << endl;
    cout << " Narxi : " << narxi << " $ " << endl;
}

class Soat
{
private:
    string brendi;
    string turi;
    int narxi;

public:
    Soat(string a, string b, int c)
    {
        brendi = a;
        turi = b;
        narxi = c;
    }

    string Get1()
    {
        return brendi;
    }
    string Get2()
    {
        return turi;
    }
    int Get3()
    {
        return narxi;
    }
};

int main()
{
    Soat obj1("Apple", "elektron", 400);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}
//NATIJA: