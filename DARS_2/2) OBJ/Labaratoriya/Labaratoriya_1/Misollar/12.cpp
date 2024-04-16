#include <iostream>

using namespace std;

class Animal
{
protected:
    string name;
    int age;

public:
    Animal(string n, int a) : name(n), age(a) {}

    void displayInfo()
    {
        cout << endl;
        cout << " Name : " << name << endl;
        cout << " Age : " << age << " years" << endl;
    }
};

class Dog : public Animal
{
private:
    string breed;

public:
    Dog(string n, int a, string b) : Animal(n, a), breed(b) {}

    void displayDogInfo()
    {
        displayInfo();
        cout << " Breed : " << breed << endl;
    }
};

class Cat : public Animal
{
private:
    string color;

public:
    Cat(string n, int a, string c) : Animal(n, a), color(c) {}

    void displayCatInfo()
    {
        displayInfo();
        cout << " Color : " << color << endl;
    }
};

int main()
{
    Animal animal("Monkey", 3);
    animal.displayInfo();

    Dog dog("Buddy", 5, "Golden Retriever");
    dog.displayDogInfo();

    Cat cat("Whiskers", 2, "White");
    cat.displayCatInfo();

    return 0;
}
