#include <iostream>

using namespace std;

struct odam
{
    int yosh;
    string nomi;
    string familiya;
};

int main()
{
    odam a1;
    cout << " Yoshi = ";
    cin >> a1.yosh;
    cout << " Nomi = ";
    cin >> a1.nomi;
    cout << " Familiya = ";
    cin >> a1.familiya;
    cout << " Yoshi = " << a1.yosh << endl;
    cout << " nomi = " << a1.nomi << endl;
    cout << " familiya = " << a1.familiya << endl;
    return 0;
}