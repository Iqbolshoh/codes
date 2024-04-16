#include <iostream>
#include <string>

using namespace std;

class Xodim
{
private:
    string ismi;
    string familiyasi;
    int yoshi;
    string lavozimi;

public:
    Xodim(string ismi, string familiyasi, int yoshi, string lavozimi)
        : ismi(ismi), familiyasi(familiyasi), yoshi(yoshi), lavozimi(lavozimi) {}

    string getIsmi() const
    {
        return ismi;
    }

    string getFamiliyasi() const
    {
        return familiyasi;
    }

    int getYoshi() const
    {
        return yoshi;
    }

    string getLavozimi() const
    {
        return lavozimi;
    }

    void PrintInfo() const
    {
        cout << "Xodim ismi: " << ismi << endl;
        cout << "Xodim familiyasi: " << familiyasi << endl;
        cout << "Xodim yoshi: " << yoshi << endl;
        cout << "Xodim lavozimi: " << lavozimi << endl;
        cout << endl;
    }
};

int main()
{
    Xodim xodim1("Ali", "Valiyev", 28, "Menejer");
    Xodim xodim2("Ilhomjonov", "Iqbolshoh", 35, "Direktor");

    cout << "Xodim 1 ma'lumotlari:" << endl;
    xodim1.PrintInfo();

    cout << "Xodim 2 ma'lumotlari:" << endl;
    xodim2.PrintInfo();

    return 0;
}
