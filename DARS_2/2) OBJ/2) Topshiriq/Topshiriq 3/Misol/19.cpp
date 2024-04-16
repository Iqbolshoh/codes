#include <iostream>

using namespace std;

class Kafedra
{
private:
    static string nom;
    static int oqituvchi;
    static int fan;

public:
    static void Set(int b, int c)
    {
        oqituvchi = b;
        fan = c;
    }
    static void Print()
    {
        cout << " 1) Kafedra nomi : " << nom << endl;
        cout << " 2) O'qituvchilar soni : " << oqituvchi << endl;
        cout << " 3) Fanlar soni : " << fan << endl;
    }
};
string Kafedra::nom = "Dasturiy injinering";
int Kafedra::oqituvchi = 17;
int Kafedra::fan = 22;

int main()
{
    Kafedra::Print();
    Kafedra::Set(15, 24);
    cout << "Malumot almashtirish" << endl;
    Kafedra::Print();
    return 0;
}