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
    { // constructor
        name = a;
        surname = b;
        age = c;
    }

    void print()
    { // member function
        cout << " Name : " << name << endl;
        cout << " Surname : " << surname << endl;
        cout << " Age : " << age << endl;
    }
};

int main()
{
    Human obj("Iqbolshoh", "Ilhomjonov", 18); // create an object of Human class
    obj.print();                              // call the print function
    return 0;
}