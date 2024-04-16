#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int c = 0;
    char a[100];
    cin.getline(a, sizeof(a));
    char unli[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < strlen(a); i++)
    {
        for (int j = 0; j < sizeof(unli); j++)
        {
            if (a[i] == unli[j])
            {
                c++;
                break;
            }
        }
    }
    cout << "Matnda " << c << " ta unli harf bor.\n";
    return 0;
}
