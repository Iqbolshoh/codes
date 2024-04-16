#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    int c = 0;
    cin.getline(a, sizeof(a));

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ' ' and a[i + 1] == 'a' or a[i] == ' ' and a[i + 1] == 'A')
        {
            c++;
        }
    }
    if (a[0] == 'a' or a[0] == 'A')
    {
        c++;
    }
    cout << " a bilan boshlanuvchi " << c << " ta so'z bor";

    return 0;
}
