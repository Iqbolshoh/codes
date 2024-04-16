#include <iostream>
#include <math.h>

using namespace std;

class Uchburchak
{
private:
    int a;
    int b;
    int c;

public:
    Uchburchak(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    friend void func(Uchburchak &obj);
};
void func(Uchburchak &obj)
{
    int a = obj.a;
    int b = obj.b;
    int c = obj.c;
    if (a + b > c and a + c > b and c + b > a)
    {
        float P = (a + b + c) / 2;
        float S = sqrt(P * (P - a) * (P - b) * (P - c));
        float r = 2 * S / (a + b + c);
        float Sa = M_PI * pow(r, 2);

        cout << " Aylana yuzasi = " << Sa;
    }
    else
        cout << " Bunday uchburchak yasab bulmaydi! ";
}

int main()
{
    int a, b, c;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    cout << " C = ";
    cin >> c;
    Uchburchak obj(a, b, c);
    func(obj);
    return 0;
}
