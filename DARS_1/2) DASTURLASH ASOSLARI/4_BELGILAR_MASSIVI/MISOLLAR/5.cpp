#include <iostream>

using namespace std;

int main()
{
    char a[100];
    cin.getline(a, sizeof(a));
    for (int i = 0; i < sizeof(a); i++)
    {
        if (a[i] >= 65 and a[i] <= 90){
            a[i] = ' ';
        }
    }
    cout << a;
    return 0;
}