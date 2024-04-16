#include <iostream>

using namespace std;

class Mashina
{
private:
    string brendi;
    int narxi;
    string nomi;
    string rangi;

public:
    Mashina() : brendi(""), narxi(0), nomi(""), rangi("") {}
    ~Mashina()
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
    Mashina obj1, obj2;
    obj1.Set("Tesla", 75000, "Model S", "black");
    obj2.Set("BYD", 60000, "Xan", "black");
    obj1.Print();
    obj2.Print();
    return 0;
}
