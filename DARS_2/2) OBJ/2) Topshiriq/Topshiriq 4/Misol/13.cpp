#include <iostream>

using namespace std;

class Shop
{
private:
    string name;
    string xaridor;

public:
    Shop(string n, string a)
    {
        name = n;
        xaridor = a;
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "xaridor: " << xaridor << endl;
        cout << endl;
    }

    friend class Mijoz;
};

class Mijoz
{
private:
    string newname;

public:
    Mijoz(string n)
    {
        newname = n;
    }

    void SetFunc(Shop &human)
    {
        human.xaridor = newname;
    }

    void print()
    {
        cout << "Yangi malumot ";
        cout << "Name: " << newname << endl;
    }
};

int main()
{
    Shop obj1("Market", "Iqbolshoh");
    obj1.print();

    Mijoz obj2("Azizjon");
    obj2.SetFunc(obj1);
    obj2.print();

    return 0;
}
