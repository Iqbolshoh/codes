#include <iostream>

using namespace std;

class Fakultet
{
private:
    string name;
    int kurs;
    int students;

public:
    Fakultet() : name(""), kurs(0), students(0) {}
    ~Fakultet()
    {
        cout << name << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, int b, int c)
    {
        name = a;
        kurs = b;
        students = c;
    }
    void Print()
    {
        cout << " 1) Nomi: " << name << endl;
        cout << " 2) Kurs: " << kurs << endl;
        cout << " 3) Studentlar: " << students << endl;
        cout << endl;
    }
};

int main()
{
    Fakultet obj1, obj2;
    obj1.Set("204", 2, 27);
    obj2.Set("203", 2, 25);
    obj1.Print();
    obj2.Print();
    return 0;
}