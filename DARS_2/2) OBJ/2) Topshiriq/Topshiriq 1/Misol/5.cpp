#include <iostream>

using namespace std;

void print(string nomi, int oqit, int oquv)
{
    cout << " Maktab Nomi : " << nomi << endl;
    cout << " O'qituvchilar soni : " << oqit << endl;
    cout << " O'quvchilar soni : " << oquv << endl;
}

class Maktab
{
private:
    string nomi;
    int oqit;
    int oquv;

public:
    Maktab(string a, int b, int c)
    {
        nomi = a;
        oqit = b;
        oquv = c;
    }

    string Get1()
    {
        return nomi;
    }
    int Get2()
    {
        return oqit;
    }
    int Get3()
    {
        return oquv;
    }
};

int main()
{
    Maktab obj1("33-IDUM", 105, 1405);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

// NATIJA: