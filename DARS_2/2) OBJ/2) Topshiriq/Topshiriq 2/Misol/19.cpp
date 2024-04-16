#include <iostream>

using namespace std;

class Korxona
{
private:
    string name;
    int xodim;
    int daromad;

public:
    Korxona() : name(""), xodim(0), daromad(0) {}
    ~Korxona()
    {
        cout << name << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, int b, int c)
    {
        name = a;
        xodim = b;
        daromad = c;
    }
    void Print()
    {
        cout << " 1) Nomi: " << name << endl;
        cout << " 2) Xodim: " << xodim << endl;
        cout << " 3) Daromad: " << daromad << "$" << endl;
        cout << endl;
    }
};

int main()
{
    Korxona obj1, obj2;
    obj1.Set("IT-center", 7, 57000);
    obj2.Set("Premium education", 20, 25000);
    obj1.Print();
    obj2.Print();
    return 0;
}