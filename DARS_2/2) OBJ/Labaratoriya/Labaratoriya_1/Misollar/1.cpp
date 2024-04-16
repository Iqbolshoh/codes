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

class Student : public Human
{
private:
    int course;
    string studentID;

public:
    Student(string n, int a, int c, string id) : Human(n, a), course(c), studentID(id) {}

    void displayStudentInfo()
    {
        displayInfo();
        cout << " Course : " << course << endl;
        cout << " Talaba ID : " << studentID << endl;
    }
};

int main()
{
    Human person("Iqbolshoh", 18);
    person.displayInfo();
    Student student("Azizjon", 19, 2, "3211213121");
    student.displayStudentInfo();

    return 0;
}
