#include <iostream>

using namespace std;

class GeometrikShakl
{
private:
    static string nom;
    static int a;
    static int b;
    static int c;

public:
    static void Set(int aa, int bb, int cc)
    {
        a = aa;
        b = bb;
        c = cc;
    }
    static void Print()
    {
        cout << " 1) Shakl nomi : " << nom << endl;
        cout << " 2) a : " << a << endl;
        cout << " 3) b : " << b << endl;
        cout << " 4) b : " << c << endl;
    }
};
string GeometrikShakl::nom = "Uchburchak";
int GeometrikShakl::a = 3;
int GeometrikShakl::b = 4;
int GeometrikShakl::c = 5;

int main()
{
    GeometrikShakl::Print();
    GeometrikShakl::Set(7, 7, 7);
    cout << "Malumot almashtirish" << endl;
    GeometrikShakl::Print();
    return 0;
}