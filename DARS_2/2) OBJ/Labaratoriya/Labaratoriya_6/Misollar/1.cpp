#include <iostream>
#include <string>

using namespace std;

class Man
{
protected:
    string name;
    int age;
    char gender;

public:
    Man(string _name, int _age, char _gender) : name(_name), age(_age), gender(_gender) {}

    virtual void changeName(string newName)
    {
        name = newName;
    }

    virtual void changeAge(int newAge)
    {
        age = newAge;
    }

    virtual void changeWeight(double newWeight) = 0;
};

class Student : public Man
{
private:
    double weight;

public:
    Student(string _name, int _age, char _gender, double _weight) : Man(_name, _age, _gender), weight(_weight) {}

    void changeWeight(double newWeight) override
    {
        weight = newWeight;
    }

    void display()
    {
        cout << "Ism: " << name << endl;
        cout << "Yosh: " << age << endl;
        cout << "Jins: " << gender << endl;
        cout << "Vazn: " << weight << " kg" << endl;
    }
};

int main()
{
    Student student("John", 20, 'M', 70.5);
    student.display();

    student.changeName("Alex");
    student.changeAge(22);
    student.changeWeight(75.2);

    cout << "\nAfter changes:\n";
    student.display();

    return 0;
}
