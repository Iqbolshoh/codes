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

class Abituriyent : public Human
{
private:
    string paths;

public:
    Abituriyent(string n, int a, string p) : Human(n, a), paths(p) {}

    void displayAbituriyentInfo()
    {
        displayInfo();
        cout << " Abituriyent Paths : " << paths << endl;
    }
};

int main()
{
    Human person("Iqbolshoh", 18);
    person.displayInfo();
    Abituriyent Abituriyent("Azizjon", 19, "Matematika, Fizika");
    Abituriyent.displayAbituriyentInfo();

    return 0;
}
