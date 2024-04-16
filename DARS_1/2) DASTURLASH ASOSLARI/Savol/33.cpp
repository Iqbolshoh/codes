#include <iostream>
#include <string>

using namespace std;

string func(int n)
{
    string code = to_string(n); // Raqamni stringga aylantiramiz
    for (char &raqam : code)
    {
        if (raqam == '0')
        {
            raqam = '1';
        }
        else if (raqam == '1')
        {
            raqam = '0';
        }
    }
    return code;
}

int main()
{
    int n;
    cout << "Raqamni kiriting: ";
    cin >> n;
    cout << " " <<func(n) << endl;

    return 0;
}
