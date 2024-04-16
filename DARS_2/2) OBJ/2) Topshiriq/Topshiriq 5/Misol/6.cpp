#include <iostream>
#include <string>

using namespace std;

class Talaba
{
private:
    string ism;
    string familiya;
    int yosh;

public:
    Talaba(string ism, string familiya, int yosh) : ism(ism), familiya(familiya), yosh(yosh) {}

    string getIsm() const
    {
        return ism;
    }

    string getFamiliya() const
    {
        return familiya;
    }

    int getYosh() const
    {
        return yosh;
    }
};

int main()
{
    Talaba talaba1("Iqbolshoh", "Ilhomjonov", 20);
    Talaba talaba2("Azizjon", "Kayumov", 22);

    cout << "Talaba 1 ma'lumotlari:" << endl;
    cout << "Ism: " << talaba1.getIsm() << endl;
    cout << "Familiya: " << talaba1.getFamiliya() << endl;
    cout << "Yosh: " << talaba1.getYosh() << endl;
    cout << endl;

    cout << "Talaba 2 ma'lumotlari:" << endl;
    cout << "Ism: " << talaba2.getIsm() << endl;
    cout << "Familiya: " << talaba2.getFamiliya() << endl;
    cout << "Yosh: " << talaba2.getYosh() << endl;
    cout << endl;

    return 0;
}
