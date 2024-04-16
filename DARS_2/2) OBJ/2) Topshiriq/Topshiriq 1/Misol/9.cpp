#include <iostream>

using namespace std;

void print(string yonalishi, int raqami, int talabalar)
{
    cout << " Yo'nalish : " << yonalishi << endl;
    cout << " Guruh raqami : " << raqami << endl;
    cout << " Talabalar soni : " << talabalar << endl;
}

class Guruh
{
private:
    string yonalishi;
    int raqami;
    int talabalar;

public:
    Guruh(string a, int b, int c)
    {
        yonalishi = a;
        raqami = b;
        talabalar = c;
    }

    string Get1()
    {
        return yonalishi;
    }
    int Get2()
    {
        return raqami;
    }
    int Get3()
    {
        return talabalar;
    }
};

int main()
{
    Guruh obj1("Dasturiy injenering", 204, 27);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA:
