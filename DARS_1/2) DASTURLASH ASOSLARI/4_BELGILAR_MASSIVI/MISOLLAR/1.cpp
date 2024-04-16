#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[100];
    int c = 1;
    cin.getline(a, sizeof(a));

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == ' ')
        {
            c++;
        }
    }

    cout << c << " ta so'z bor";

    return 0;
}
