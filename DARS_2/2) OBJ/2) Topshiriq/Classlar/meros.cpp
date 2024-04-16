#include <iostream>

using namespace std;

class Human
{
private:
    string name;
    string surname;
    int age;

public:
    Human(string a, string b, int c)
    {
        name = a;
        surname = b;
        age = c;
    }

    void print()
    {
        cout << " Name : " << name << endl;
        cout << " Surname : " << surname << endl;
        cout << " Age : " << age << endl;
    }
};

class Student : public Human
{
public:
    string universitet;

    Student(string a, string b, int c, string d) : Human(a, b, c)
    {
        universitet = d;
    }

    void chiqar()
    {
        cout << " Universitet : " << universitet << endl;
        print();
    }
};

int main()
{
    Student obj("Iqbolshoh", "Ilhomjonov", 18, "SamDU");
    obj.chiqar();
    return 0;
}
