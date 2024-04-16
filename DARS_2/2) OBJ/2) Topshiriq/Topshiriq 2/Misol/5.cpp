#include <iostream>

using namespace std;

class Shakl
{
private:
    string shaklnomi;
    int yuzasi;
    string rangi;
    int soni;

public:
    Shakl() : shaklnomi(""), yuzasi(0), rangi(""), soni(0) {}
    ~Shakl()
    {
        cout << shaklnomi << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, int b, string c, int d)
    {
        shaklnomi = a;
        yuzasi = b;
        rangi = c;
        soni = d;
    }
    void Print()
    {
        cout << " 1) Shakl nomi: " << shaklnomi << endl;
        cout << " 2) Yuzasi: " << yuzasi << endl;
        cout << " 3) Rangi: " << rangi << endl;
        cout << " 4) Soni: " << soni << endl;
        cout << endl;
    }
};
int main()
{
    Shakl obj1, obj2;
    obj1.Set("Uchburchak", 15, "qizil", 14);
    obj2.Set("To'rtburchak", 20, "ko'k", 7);
    obj1.Print();
    obj2.Print();
    return 0;
}
