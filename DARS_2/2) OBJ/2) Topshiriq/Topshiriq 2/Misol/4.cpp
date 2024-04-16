#include <iostream>

using namespace std;

class Shifoxona
{
private:
    string nom;
    string manzil;
    string xizmatTuri;
    int ishchiSoni;

public:
    Shifoxona() : nom(""), manzil(""), xizmatTuri(""), ishchiSoni(0) {}
    ~Shifoxona()
    {
        cout << nom << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, string b, string c, int d)
    {
        nom = a;
        manzil = b;
        xizmatTuri = c;
        ishchiSoni = d;
    }
    void Print()
    {
        cout << " 1) Shifoxona nomi: " << nom << endl;
        cout << " 2) Manzil: " << manzil << endl;
        cout << " 3) Xizmat turi: " << xizmatTuri << endl;
        cout << " 4) Ishchilar soni: " << ishchiSoni << endl;
        cout << endl;
    }
};
int main()
{
    Shifoxona obj1, obj2;
    obj1.Set("Tibbiyot shifoxonasi", "Toshkent, Amir Temur kochasi", "Tibbiy xizmat", 50);
    obj2.Set("Tibbiyot shifoxonasi", "Samarqand, Seliskiy", "Tibbiy xizmat", 70);
    obj1.Print();
    obj2.Print();
    return 0;
}
