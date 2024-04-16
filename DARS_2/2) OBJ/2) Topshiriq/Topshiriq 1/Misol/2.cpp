#include <iostream>

using namespace std;

void print(string name, string surname, int age)
{
    cout << " Name : " << name << endl;
    cout << " Surname : " << surname << endl;
    cout << " Age : " << age << endl;
}

class Talaba
{
private:
    string name;
    string surname;
    int age;

public:
    Talaba(string a, string b, int c)
    {
        name = a;
        surname = b;
        age = c;
    }

    string GetName()
    {
        return name;
    }
    string GetSurname()
    {
        return surname;
    }
    int GetAge()
    {
        return age;
    }
};

int main()
{
    Talaba obj1("Iqbolshoh", "Ilhomjonov", 18);
    print(obj1.GetName(), obj1.GetSurname(), obj1.GetAge());
    return 0;
}
//NATIJA: