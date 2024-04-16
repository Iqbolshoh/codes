#include <iostream>

using namespace std;

void print(string ismi, int tajriba, int oyligi)
{
    cout << " Nomi : " << ismi << endl;
    cout << " Tajribasi (yil) : " << tajriba << endl;
    cout << " Oyligi : " << oyligi << endl;
}

class Xodim
{
private:
    string ismi;
    int tajriba;
    int oyligi;

public:
    Xodim(string a, int b, int c)
    {
        ismi = a;
        tajriba = b;
        oyligi = c;
    }

    string Get1()
    {
        return ismi;
    }
    int Get2()
    {
        return tajriba;
    }
    int Get3()
    {
        return oyligi;
    }
};

int main()
{
    Xodim obj1("Iqbolshoh", 7, 7000000);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA: