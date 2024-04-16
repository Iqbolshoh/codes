#include <iostream>

using namespace std;

class Mashina
{
private:
    static string nomi;
    static string brendi;
    static int narxi;

public:
    static void Set(string b, int c)
    {
        nomi = b;
        narxi = c;
    }
    static void Print()
    {
        cout << " 1) Mashina nomi : " << nomi << endl;
        cout << " 2) Brendi : " << brendi << endl;
        cout << " 3) Narxi : " << narxi << "$" << endl;
    }
};
string Mashina::nomi = "Model S";
string Mashina::brendi = "Tesla";
int Mashina::narxi = 77000;

int main()
{
    Mashina::Print();
    Mashina::Set("Model Y", 57000);
    cout << "Malumot almashtirish" << endl;
    Mashina::Print();
    return 0;
}