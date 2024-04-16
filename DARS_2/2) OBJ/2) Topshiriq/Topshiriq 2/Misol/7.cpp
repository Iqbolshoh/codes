#include <iostream>

using namespace std;

class Telefon
{
private:
    string brendi;
    int narxi;
    string nomi;
    string rangi;

public:
    Telefon() : brendi(""), narxi(0), nomi(""), rangi("") {}
    ~Telefon()
    {
        cout << brendi << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, int b, string c, string d)
    {
        brendi = a;
        narxi = b;
        nomi = c;
        rangi = d;
    }
    void Print()
    {
        cout << " 1) Brendi: " << brendi << endl;
        cout << " 2) Narxi: " << narxi << endl;
        cout << " 3) Nomi: " << nomi << endl;
        cout << " 4) Rangi: " << rangi << endl;
        cout << endl;
    }
};
int main()
{
    Telefon obj1, obj2;
    obj1.Set("Iphone", 1200, "15 pro", "space gray");
    obj2.Set("Samsung", 1000, "S 23 ultra", "black");
    obj1.Print();
    obj2.Print();
    return 0;
}
