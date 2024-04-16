#include <iostream>

using namespace std;

class Noutbuk
{
private:
    string brend;
    string name;
    int prise;

public:
    Noutbuk() : brend(""), name(""), prise(0) {}
    ~Noutbuk()
    {
        cout << brend << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, string b, int c)
    {
        brend = a;
        name = b;
        prise = c;
    }
    void Print()
    {
        cout << " 1) Berndi: " << brend << endl;
        cout << " 2) Nomi: " << name << endl;
        cout << " 3) Narxi: " << prise << "$" << endl;
        cout << endl;
    }
};

int main()
{
    Noutbuk obj1, obj2;
    obj1.Set("Apple", "Macbook", 1800);
    obj2.Set("Lenovo", "Tab 7", 800);
    obj1.Print();
    obj2.Print();
    return 0;
}