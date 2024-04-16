#include <iostream>
using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human(string n, int a)
    {
        name = n;
        age = a;
    }

    void print()
    {
        cout << " Name : " << name << endl;
        cout << " Age : " << age << endl;
        cout << endl;
    }

    friend class NewHuman;
};

class NewHuman
{
private:
    string name;
    int age;

public:
    NewHuman(string n, int a)
    {
        name = n;
        age = a;
    }

    void SetFunc(Human &human)
    {
        human.name = name;
        human.age = age;
    }

    void print()
    {
        cout << " Name : " << name << endl;
        cout << " Age : " << age << endl;
        cout << endl;
    }
};

int main()
{
    Human obj1("Iqbolshoh", 18);
    obj1.print();

    NewHuman obj2("Davlat", 19);
    obj2.SetFunc(obj1);
    obj2.print();

    return 0;
}
