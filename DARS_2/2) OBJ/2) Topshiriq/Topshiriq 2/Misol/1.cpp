#include <iostream>

using namespace std;

class Viloyat
{
private:
    string nom;
    int maydoni;
    int aholiSoni;
    int tumanSoni;

public:
    Viloyat() : nom(""), maydoni(0), aholiSoni(0), tumanSoni(0) {}
    ~Viloyat()
    {
        cout << nom << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, int b, int c, int d)
    {
        nom = a;
        maydoni = b;
        aholiSoni = c;
        tumanSoni = d;
    }
    void Print()
    {
        cout << " 1) Viloyat nomi: " << nom << endl;
        cout << " 2) Maydoni: " << maydoni << endl;
        cout << " 3) Aholi soni: " << aholiSoni << endl;
        cout << " 4) Tumanlar soni: " << tumanSoni << endl;
        cout << endl;
    }
};
int main()
{
    Viloyat obj1, obj2;
    obj1.Set("Samarqand", 120, 4500000, 14);
    obj2.Set("Toshkent", 350, 40000000, 15);
    obj1.Print();
    obj2.Print();
    return 0;
}
