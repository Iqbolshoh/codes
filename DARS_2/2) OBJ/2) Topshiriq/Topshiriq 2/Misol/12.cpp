#include <iostream>

using namespace std;

class Maktab
{
private:
    string name;
    string adres;
    int subjekts;
    int teachers;
    int students;

public:
    Maktab() : name(""), adres(""), subjekts(0), teachers(0), students(0) {}
    ~Maktab()
    {
        cout << name << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, string b, int c, int d, int e)
    {
        name = a;
        adres = b;
        subjekts = c;
        teachers = d;
        students = e;
    }
    void Print()
    {
        cout << " 1) Nomi: " << name << endl;
        cout << " 2) Manzil: " << adres << endl;
        cout << " 3) Fanlar: " << subjekts << endl;
        cout << " 4) Teachers: " << teachers << endl;
        cout << " 5) Students: " << students << endl;
        cout << endl;
    }
};

int main()
{
    Maktab obj1, obj2;
    obj1.Set("33 - IDUM", "Samarqand tuman", 17, 77, 1435);
    obj2.Set("45 - Maktab", "Samarqand tuman", 17, 55, 957);
    obj1.Print();
    obj2.Print();
    return 0;
}