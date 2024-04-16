#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct odam
    {
        string ism;
        int yosh;
    };

    struct talaba
    {
        string ism;
        int yosh;
    };

    odam a;
    talaba b;
    a.ism = "Ali";
    a.yosh = 25;
    b.ism = "Iqbolshoh";
    b.yosh = 18;
    cout << a.ism << endl;
    return 0;
}
