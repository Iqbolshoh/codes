#include <iostream>

using namespace std;

string Boluvchi(int a, int b, int c, int k)
{
    string result = "";
    if (k == 0)
    {
        throw "0 ga bo'lib bo'lmaydi!!!";
    }
    if (a % k == 0)
    {
        result += to_string(a) + " ";
    }
    if (b % k == 0)
    {
        result += to_string(b) + " ";
    }
    if (c % k == 0)
    {
        result += to_string(c) + " ";
    }
    if (result == "")
    {
        throw "k sonining hech birining boluvchisi emas!";
    }
    return result;
}

int main()
{
    int a, b, c, k;

    cin >> a >> b >> c >> k;

    try
    {
        cout << Boluvchi(a, b, c, k) << "soni " << k << " ga bo'linadi " << endl;
    }
    catch (const char *error)
    {
        cout << "Xato: " << error << endl;
    }

    return 0;
}
