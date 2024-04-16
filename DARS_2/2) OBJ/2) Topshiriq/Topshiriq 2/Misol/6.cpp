#include <iostream>

using namespace std;

class Shakl
{
private:
    string brendi;
    int narxi;
    string turi;
    string rangi;

public:
    Shakl() : brendi(""), narxi(0), turi(""), rangi("") {}
    ~Shakl()
    {
        cout << brendi << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, int b, string c, string d)
    {
        brendi = a;
        narxi = b;
        turi = c;
        rangi = d;
    }
    void Print()
    {
        cout << " 1) Brendi: " << brendi << endl;
        cout << " 2) Narxi: " << narxi << endl;
        cout << " 3) Turi: " << turi << endl;
        cout << " 4) Rangi: " << rangi << endl;
        cout << endl;
    }
};
int main()
{
    Shakl obj1, obj2;
    obj1.Set("Rolex", 15000, "qo'l soat", "black");
    obj2.Set("Jacob", 20000, "qo'l soat", "space gray");
    obj1.Print();
    obj2.Print();
    return 0;
}
