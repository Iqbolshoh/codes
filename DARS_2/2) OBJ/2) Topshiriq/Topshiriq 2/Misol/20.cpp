#include <iostream>

using namespace std;

class Shahar
{
private:
    string name;
    int maydoni;
    int aholi;

public:
    Shahar() : name(""), maydoni(0), aholi(0) {}
    ~Shahar()
    {
        cout << name << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, int b, int c)
    {
        name = a;
        maydoni = b;
        aholi = c;
    }
    void Print()
    {
        cout << " 1) Nomi: " << name << endl;
        cout << " 2) Maydoni: " << maydoni << " Gektar " << endl;
        cout << " 3) Aholi: " << aholi << endl;
        cout << endl;
    }
};

int main()
{
    Shahar obj1, obj2;
    obj1.Set("Samarqand", 15000, 1750300);
    obj2.Set("Buxoro", 17000, 2507100);
    obj1.Print();
    obj2.Print();
    return 0;
}