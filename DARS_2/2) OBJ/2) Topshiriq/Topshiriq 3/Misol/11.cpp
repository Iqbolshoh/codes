#include <iostream>

using namespace std;

class Dekanat
{
private:
    static string fakultet;
    static string dekan;
    static int talaba;

public:
    static void Set(string a, string b, int c)
    {
        fakultet = a;
        dekan = b;
        talaba = c;
    }
    static void Print()
    {
        cout << " 1) Fakultet : " << fakultet << endl;
        cout << " 2) Dekan : " << dekan << endl;
        cout << " 3) Talabalar soni : " << talaba << endl;
    }
};
string Dekanat::fakultet = "Intelektular tizimlar";
string Dekanat::dekan = "Nazarov Fayzullo";
int Dekanat::talaba = 1500;

int main()
{
    Dekanat::Print();
    Dekanat::Set("Matematika", "Ilhomjonov Iqbolshoh", 2200);
    cout << "Malumot almashtirish" << endl;
    Dekanat::Print();
    return 0;
}