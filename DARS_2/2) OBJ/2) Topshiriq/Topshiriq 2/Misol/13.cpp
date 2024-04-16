#include <iostream>

using namespace std;

class Kitob
{
private:
    string name;
    string author;
    int reader;

public:
    Kitob() : name(""), author(""), reader(0) {}
    ~Kitob()
    {
        cout << name << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, string b, int c)
    {
        name = a;
        author = b;
        reader = c;
    }
    void Print()
    {
        cout << " 1) Nomi: " << name << endl;
        cout << " 2) Muallif: " << author << endl;
        cout << " 3) Kitobxonlar: " << reader << endl;
        cout << endl;
    }
};

int main()
{
    Kitob obj1, obj2;
    obj1.Set("Atom odatlar", "Jems Klir", 57420);
    obj2.Set("Ikki eshik orasi", "Utkir Hoshimov", 25330);
    obj1.Print();
    obj2.Print();
    return 0;
}