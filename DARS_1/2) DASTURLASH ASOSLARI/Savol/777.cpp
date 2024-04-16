#include <iostream>
#include <string>

using namespace std;

struct odam
{
    string ism;
    int yosh;

    void chiqar()
    {
        cout << "Ism: " << ism << endl;
        cout << "Yosh: " << yosh << endl;
    }
};

int main()
{
    odam obj1, obj2;
    obj1.ism = "Ali";
    obj1.yosh = 25;
    obj1.chiqar();

    obj2.ism = "Iqbolshoh";
    obj2.yosh = 18;
    obj2.chiqar();

    return 0;
}
