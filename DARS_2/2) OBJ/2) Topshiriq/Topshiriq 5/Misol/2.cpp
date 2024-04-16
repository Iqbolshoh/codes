#include <iostream>

using namespace std;

class Trapetsiya
{
private:
    double uzun_tomon;
    double qisqa_tomon;
    double balandlik;

public:
    Trapetsiya(double uzun_tomon, double qisqa_tomon, double balandlik)
    {
        this->uzun_tomon = uzun_tomon;
        this->qisqa_tomon = qisqa_tomon;
        this->balandlik = balandlik;
    }

    double yuzani_hisoblash() const
    {
        return (uzun_tomon + qisqa_tomon) * balandlik / 2.0;
    }

    double perimeterni_hisoblash() const
    {
        return uzun_tomon + qisqa_tomon + 2 * balandlik;
    }
};

int main()
{
    Trapetsiya trapetsiya(5.0, 3.0, 4.0);

    double yuza = trapetsiya.yuzani_hisoblash();
    double perimetr = trapetsiya.perimeterni_hisoblash();

    cout << "Trapetsiya yuzasi: " << yuza << endl;
    cout << "Trapetsiya perimetri: " << perimetr << endl;

    return 0;
}
