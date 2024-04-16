#include <iostream>

using namespace std;

void print(string name, string surname, int age)
{
    cout << " Name : " << name << endl;
    cout << " Surname : " << surname << endl;
    cout << " Age : " << age << endl;
}

class Human
{
public:
    string name;
    string surname;
    int age;
};

int main()
{
    Human obj;
    obj.name = "Iqbolshoh";
    obj.surname = "Ilhomjonov";
    obj.age = 18;

    print(obj.name, obj.surname, obj.age);
    return 0;
}