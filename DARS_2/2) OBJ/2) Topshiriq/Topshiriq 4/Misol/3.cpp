#include <iostream>

using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double realPart = 0, double imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart) {}

    ComplexNumber addComplex(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    void print() const {
        cout << "Real: " << real << ", Imaginary: " << imaginary << endl;
    }
};

int main() {
    ComplexNumber firstComplex(2.5, 3.7);
    ComplexNumber secondComplex(1.8, 4.2);

    ComplexNumber result = firstComplex.addComplex(secondComplex);

    cout << "Sum of Complex Numbers: ";
    result.print();

    return 0;
}
