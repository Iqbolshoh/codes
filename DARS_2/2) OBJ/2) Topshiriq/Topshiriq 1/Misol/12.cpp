#include <iostream>

using namespace std;

void print(string direktor, int xodimlar, int daromadi)
{
    cout << " Korxona Direktori : " << direktor << endl;
    cout << " Xodimlar soni : " << xodimlar << endl;
    cout << " Yillik daromadi : " << daromadi << endl;
}

class Korxona
{
private:
    string direktor;
    int xodimlar;
    int daromadi;

public:
    Korxona(string a, int b, int c)
    {
        direktor = a;
        xodimlar = b;
        daromadi = c;
    }

    string Get1()
    {
        return direktor;
    }
    int Get2()
    {
        return xodimlar;
    }
    int Get3()
    {
        return daromadi;
    }
};

int main()
{
    Korxona obj1("Iqbolshoh", 45, 777999000);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

// NATIJA: