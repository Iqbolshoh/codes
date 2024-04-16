#include <iostream>
#include <cmath>

using namespace std;

class Shakl
{
private:
    double uzunlik;

public:
    Shakl(double uzunlik)
    {
        this->uzunlik = uzunlik;
    }

    double getUzunlik() const
    {
        return uzunlik;
    }

    virtual double getYuzasi() const = 0;
    virtual double getPerimetri() const = 0;
};

class Doira : public Shakl
{
public:
    Doira(double uzunlik) : Shakl(uzunlik) {}

    double getYuzasi() const override
    {
        return M_PI * pow(getUzunlik() / 2.0, 2);
    }

    double getPerimetri() const override
    {
        return 2 * M_PI * getUzunlik() / 2.0;
    }
};

class Kvadrat : public Shakl
{
public:
    Kvadrat(double uzunlik) : Shakl(uzunlik) {}

    double getYuzasi() const override
    {
        return pow(getUzunlik(), 2);
    }

    double getPerimetri() const override
    {
        return 4 * getUzunlik();
    }
};

int main()
{
    Doira doira(5.0);
    Kvadrat kvadrat(4.0);

    cout << "Doira yuzasi: " << doira.getYuzasi() << ", Perimetri: " << doira.getPerimetri() << endl;
    cout << "Kvadrat yuzasi: " << kvadrat.getYuzasi() << ", Perimetri: " << kvadrat.getPerimetri() << endl;

    return 0;
}
