#include <iostream>

using namespace std;

void almashtirish(string &a, string &b)
{
    string c = a;
    a = b;
    b = c;
}

int main()
{
    string a, b;

    cout << "Birinchi qiymatni kiriting: ";
    cin >> a;
    cout << "Ikkinchi qiymatni kiriting: ";
    cin >> b;

    almashtirish(a, b);
    cout << "Almashtirilgan qiymatlar: " << a << " " << b << endl;

    return 0;
}
