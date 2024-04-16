#include <iostream>

using namespace std;

class Complex
{
private:
    double real;      // Haqiqiy qism
    double imaginary; // Tasavvur qilingan qism

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    Complex operator*(const Complex &other) const
    {
        return Complex((real * other.real) - (imaginary * other.imaginary),
                       (real * other.imaginary) + (imaginary * other.real));
    }

    Complex operator/(const Complex &other) const
    {
        double denominator = (other.real * other.real) + (other.imaginary * other.imaginary);
        if (denominator == 0)
            throw "Division by zero error";
        return Complex(((real * other.real) + (imaginary * other.imaginary)) / denominator,
                       ((imaginary * other.real) - (real * other.imaginary)) / denominator);
    }

    friend ostream &operator<<(ostream &out, const Complex &c)
    {
        out << c.real << " + " << c.imaginary << "i";
        return out;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(1, 2);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex product = c1 * c2;
    Complex quotient = c1 / c2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
