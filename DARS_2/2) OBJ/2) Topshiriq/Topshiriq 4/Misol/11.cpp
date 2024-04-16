#include <iostream>

using namespace std;

class Oqituvchi
{
private:
    string name;
    string surname;

public:
    Oqituvchi(string n, string a)
    {
        name = n;
        surname = a;
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << endl;
    }

    friend class Bolim;
};

class Bolim
{
private:
    string newname;

public:
    Bolim(string n)
    {
        newname = n;
    }

    void SetFunc(Oqituvchi &human)
    {
        human.name = newname;
    }

    void print()
    {
        cout << "Yangi malumot ";
        cout << "Name: " << newname << endl;
    }
};

int main()
{
    Oqituvchi obj1("Iqbolshoh", "Ilhomjonov");
    obj1.print();

    Bolim obj2("Iqbolshoh_777");
    obj2.SetFunc(obj1);
    obj2.print();

    return 0;
}
