#include <iostream>

using namespace std;

class Talaba
{
private:
    string nomi;
    string familya;
    int yosh;
    string guruh;

public:
    Talaba() : nomi(""), familya(""), yosh(0), guruh("") {}
    ~Talaba()
    {
        cout << nomi << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, string b, int c, string d)
    {
        nomi = a;
        familya = b;
        yosh = c;
        guruh = d;
    }
    void Print()
    {
        cout << " 1) Ism: " << nomi << endl;
        cout << " 2) Familya: " << familya << endl;
        cout << " 3) Yoshi: " << yosh << endl;
        cout << " 4) Guruh: " << guruh << endl;
        cout << endl;
    }
};

int main()
{
    Talaba obj1, obj2;
    obj1.Set("Iqbolshoh", "Ilhomjonov", 18, "204");
    obj2.Set("Davlat", "Farruxov", 19, "204");
    obj1.Print();
    obj2.Print();
    return 0;
}
