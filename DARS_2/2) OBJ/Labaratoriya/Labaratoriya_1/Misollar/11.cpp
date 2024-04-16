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
protected:
    double salary;

public:
    Employee(string n, int a, double s) : Human(n, a), salary(s) {}

    void displayEmployeeInfo()
    {
        displayInfo();
        cout << " Salary : " << salary << " $ " << endl;
    }
};

class Supervisor : public Employee
{
private:
    string department;

public:
    Supervisor(string n, int a, double s, string d) : Employee(n, a, s), department(d) {}

    void displaySupervisorInfo()
    {
        displayEmployeeInfo();
        cout << " Department : " << department << endl;
    }
};

int main()
{
    Human person("Iqbolshoh", 18);
    person.displayInfo();

    Employee employee("Azizjon", 20, 50000.0);
    employee.displayEmployeeInfo();

    Supervisor supervisor("Davlat", 19, 70000.0, "Management");
    supervisor.displaySupervisorInfo();

    return 0;
}
