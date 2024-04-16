#include <iostream>

using namespace std;

class Kutubxona
{
private:
    string name;
    int books;
    int students;

public:
    Kutubxona() : name(""), books(0), students(0) {}
    ~Kutubxona()
    {
        cout << name << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, int b, int c)
    {
        name = a;
        books = b;
        students = c;
    }
    void Print()
    {
        cout << " 1) Nomi: " << name << endl;
        cout << " 2) Kitoblar: " << books << endl;
        cout << " 3) Studentlar: " << students << endl;
        cout << endl;
    }
};

int main()
{
    Kutubxona obj1, obj2;
    obj1.Set("Samdu", 1700, 3800);
    obj2.Set("Pushkinski", 1400, 2750);
    obj1.Print();
    obj2.Print();
    return 0;
}