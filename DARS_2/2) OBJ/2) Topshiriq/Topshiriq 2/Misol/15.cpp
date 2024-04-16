#include <iostream>

using namespace std;

class Fakultet
{
private:
    string name;
    int kafedra;
    int students;

public:
    Fakultet() : name(""), kafedra(0), students(0) {}
    ~Fakultet()
    {
        cout << name << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, int b, int c)
    {
        name = a;
        kafedra = b;
        students = c;
    }
    void Print()
    {
        cout << " 1) Nomi: " << name << endl;
        cout << " 2) Kafedra: " << kafedra << endl;
        cout << " 3) Studentlar: " << students << endl;
        cout << endl;
    }
};

int main()
{
    Fakultet obj1, obj2;
    obj1.Set("Intelektual T.", 3, 770);
    obj2.Set("Matematika", 5, 2500);
    obj1.Print();
    obj2.Print();
    return 0;
}