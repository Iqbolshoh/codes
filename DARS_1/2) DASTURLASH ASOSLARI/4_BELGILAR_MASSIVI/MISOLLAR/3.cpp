#include <iostream>

using namespace std;

int main()
{
    char a[100];
    cin.getline(a, sizeof(a));
    int c = 0;
    for (int i = 0; i < sizeof(a); i++)
    {
        if (a[i] == '.')
        {
            c++;
        }
    }
    cout << "matnda " << c << " ta gap bor ";
    return 0;
}