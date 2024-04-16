#include <iostream>

using namespace std;

class Human
{
private:
    string name;
    string surname;

public:
    Human(string n, string a)
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

    friend class Number;
};

class Number
{
private:
    int number;

public:
    Number(int n)
    {
        number = n;
    }

    void SetFunc(Human &human)
    {
        human.name = to_string(number);
    }

    void print()
    {
        cout << "Number: " << number << endl;
    }
};

int main()
{
    Human obj1("Iqbolshoh", "Ilhomjonov");
    obj1.print();

    Number obj2(997799333);
    obj2.SetFunc(obj1);
    obj2.print();

    return 0;
}
