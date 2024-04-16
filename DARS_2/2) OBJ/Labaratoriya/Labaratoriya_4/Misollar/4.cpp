#include <iostream>

using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom)
    {
        if (denominator == 0)
        {
            cout << " Maxraj 0 bo'lishi mumkin emas!";
            exit(EXIT_FAILURE); // dasturni to'xtatish
        }
    }

    Fraction operator+(const Fraction &other)
    {
        Fraction result;
        result.numerator = numerator * other.denominator + other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction operator-(const Fraction &other)
    {
        Fraction result;
        result.numerator = numerator * other.denominator - other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction operator*(const Fraction &other)
    {
        Fraction result;
        result.numerator = numerator * other.numerator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    Fraction operator/(const Fraction &other)
    {
        Fraction result;
        result.numerator = numerator * other.denominator;
        result.denominator = denominator * other.numerator;
        return result;
    }

    void display()
    {
        int gcd = findGCD(numerator, denominator);
        int simplifiedNumerator = numerator / gcd;
        int simplifiedDenominator = denominator / gcd;
        if (simplifiedDenominator > 1)
        {
            cout << simplifiedNumerator << "/" << simplifiedDenominator;
        }
        else if (simplifiedDenominator == 1)
        {
            cout << simplifiedNumerator;
        }
    }

private:
    int findGCD(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main()
{
    Fraction f1(1, 2); // 1/2
    Fraction f2(1, 4); // 1/4

    Fraction sum = f1 + f2;
    cout << "Yig'indi: ";
    sum.display();
    cout << endl;

    Fraction difference = f1 - f2;
    cout << "Ayirma: ";
    difference.display();
    cout << endl;

    Fraction product = f1 * f2;
    cout << "Ko'paytirish: ";
    product.display();
    cout << endl;

    Fraction quotient = f1 / f2;
    cout << "Bo'lish: ";
    quotient.display();
    cout << endl;

    return 0;
}
