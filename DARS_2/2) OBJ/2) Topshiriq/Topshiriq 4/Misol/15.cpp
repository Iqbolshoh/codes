#include <iostream>

using namespace std;

class Shaxs
{
private:
    string name;
    string manzil;

public:
    Shaxs(string n)
    {
        name = n;
    }

    void print()
    {
        cout << "Name: " << name << endl;
    }

    friend class Manzil;
};

class Manzil
{
private:
    string newname;

public:
    Manzil(string n)
    {
        newname = n;
    }

    void SetFunc(Shaxs &human)
    {
        human.manzil = newname;
    }

    void print()
    {
        cout << "Manzil: " << newname << endl;
    }
};

int main()
{
    Shaxs obj1("Iqbolshoh");
    obj1.print();

    Manzil obj2("Samarqand");
    obj2.SetFunc(obj1);
    obj2.print();

    return 0;
}
