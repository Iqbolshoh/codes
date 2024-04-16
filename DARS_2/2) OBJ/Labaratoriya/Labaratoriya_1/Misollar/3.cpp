#include <iostream>

using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human(string n, int a) : name(n), age(a) {}

    void displayInfo()
    {
        cout << endl;
        cout << " Name : " << name << endl;
        cout << " Age : " << age << endl;
    }
};

class Employee : public Human
{
private:
    int experience;
    string EmployeeID;

public:
    Employee(string n, int a, int e, string id) : Human(n, a), experience(e), EmployeeID(id) {}

    void displayEmployeeInfo()
    {
        displayInfo();
        cout << " Experience : " << experience << " years " << endl;
        cout << " Employee ID : " << EmployeeID << endl;
    }
};

int main()
{
    Human person("Iqbolshoh", 18);
    person.displayInfo();
    Employee employee("Iqbolshoh", 18, 3, "7777");
    employee.displayEmployeeInfo();

    return 0;
}
