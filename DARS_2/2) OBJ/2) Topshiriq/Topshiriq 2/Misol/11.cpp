#include <iostream>

using namespace std;

class Kafedra
{
private:
    string name;
    string fakultet;
    int subjekts;
    int teachers;
    int groups;

public:
    Kafedra() : name(""), fakultet(""), subjekts(0), teachers(0), groups(0) {}
    ~Kafedra()
    {
        cout << name << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, string b, int c, int d, int e)
    {
        name = a;
        fakultet = b;
        subjekts = c;
        teachers = d;
        groups = e;
    }
    void Print()
    {
        cout << " 1) Nomi: " << name << endl;
        cout << " 2) Fakultet: " << fakultet << endl;
        cout << " 3) Fanlar: " << subjekts << endl;
        cout << " 4) Teachers: " << teachers << endl;
        cout << " 5) Groups: " << groups << endl;
        cout << endl;
    }
};

int main()
{
    Kafedra obj1, obj2;
    obj1.Set("Dasturiy injinering", "Intelektual T.", 17, 23, 35);
    obj2.Set("Kompyuter Ilmlari", "Intelektual T.", 14, 19, 28);
    obj1.Print();
    obj2.Print();
    return 0;
}