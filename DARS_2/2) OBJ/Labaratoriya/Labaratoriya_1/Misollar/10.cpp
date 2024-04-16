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
class Teacher : public Human
{
private:
    string subject;
    int experience;

public:
    Teacher(string n, int a, string subj, int exp) : Human(n, a), subject(subj), experience(exp) {}
    void displayTeacherInfo()
    {
        displayInfo();
        cout << " Subject : " << subject << endl;
        cout << " Teaching Experience : " << experience << " years" << endl;
    }
};

int main()
{
    Human person("Iqbolshoh", 18);
    person.displayInfo();
    Teacher teacher("Azizjon", 20, "Mathematics", 3);
    teacher.displayTeacherInfo();

    return 0;
}
