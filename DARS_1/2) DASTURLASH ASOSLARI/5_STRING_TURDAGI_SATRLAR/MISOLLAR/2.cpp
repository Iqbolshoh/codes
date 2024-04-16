#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int c = 0;
    char str[100];
    int n = strlen(str);

    cout << "Satrni kiriting: ";
    cin.getline(str, sizeof(str));

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a')
        {
            str[i] = str[i+1];

        }
    }
    str[c] = '\0';

    cout << "Natija: " << str << endl;

    return 0;
}
