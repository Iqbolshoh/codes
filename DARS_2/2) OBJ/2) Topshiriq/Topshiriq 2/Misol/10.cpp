#include <iostream>

using namespace std;

class Universitet
{
private:
    string name;
    string adres;
    int fakultet;
    int students;

public:
    Universitet() : name(""), adres(""), fakultet(0), students(0) {}
    ~Universitet()
    {
        cout << name << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, string b, int c, int d)
    {
        name = a;
        adres = b;
        fakultet = c;
        students = d;
    }
    void Print()
    {
        cout << " 1) Nomi: " << name << endl;
        cout << " 2) Adres: " << adres << endl;
        cout << " 3) Fakultet: " << fakultet << endl;
        cout << " 4) Students: " << students << endl;
        cout << endl;
    }
};

int main()
{
    Universitet obj1, obj2;
    obj1.Set("SamDU", "Samarqand", 14, 28000);
    obj2.Set("Milliy", "Toshkent", 16, 32000);
    obj1.Print();
    obj2.Print();
    return 0;
}