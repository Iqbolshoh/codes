#include <iostream>

using namespace std;

int main()
{
    struct odam
    {
        int yosh;
        string nomi;
        string familiya;
    };
    odam a1;
    cout << " Yoshi = ";
    cin >> a1.yosh;
    cout << " Nomi = ";
    cin >> a1.nomi;
    cout << " Familiya = ";
    cin >> a1.familiya;
    cout << " Yoshi = " << a1.yosh << endl;
    cout << " Nomi = " << a1.nomi << endl;
    cout << " Familiya = " << a1.familiya << endl;
    return 0;
}