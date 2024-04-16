#include <iostream>

using namespace std;

void func(int yosh, string nomi, string familiya)
{
    cout << endl;
    cout << " Yoshi = " << yosh << endl;
    cout << " nomi = " << nomi << endl;
    cout << " familiya = " << familiya << endl;
    cout << endl;
}

struct odam
{
    int yosh;
    string nomi;
    string familiya;
};

int main()
{
    odam a1, a2, a3;
    cout << " Yoshi = ";
    cin >> a1.yosh;
    cout << " Nomi = ";
    cin >> a1.nomi;
    cout << " Familiya = ";
    cin >> a1.familiya;
    
    cout << " Yoshi = ";
    cin >> a2.yosh;
    cout << " Nomi = ";
    cin >> a2.nomi;
    cout << " Familiya = ";
    cin >> a2.familiya;

    func(a1.yosh, a1.nomi, a1.familiya);
    func(a2.yosh, a2.nomi, a2.familiya);
    return 0;
}