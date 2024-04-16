#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    string str;
    cout << " Str = ";
    cin >> str;
    for (int i = 0; i < 10; i++)
    {
        if (str[i] == 'a' or str[i] == 'A')
        {
            c++;
        }
    }
    cout << " a  harfi" << c << " Marta qatnashgan ";
    return 0;
}