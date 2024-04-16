#include <iostream>

using namespace std;

class Kutubxona
{
private:
    string name;
    int qarz;

public:
    Kutubxona(string n, int a)
    {
        name = n;
        qarz = a;
    }

    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Qarz: " << qarz << endl;
        cout << endl;
    }

    friend class Talaba;
};

class Talaba
{
private:
    int newData;

public:
    Talaba(int n)
    {
        newData = n;
    }

    void SetFunc(Kutubxona &human)
    {
        human.qarz = newData;
    }

    void print()
    {
        cout << "Yangi malumot ";
        cout << "Qarz: " << newData << endl;
    }
};

int main()
{
    Kutubxona obj1("SamDU kutubxonasi", 222);
    obj1.print();

    Talaba obj2(177);
    obj2.SetFunc(obj1);
    obj2.print();

    return 0;
}
