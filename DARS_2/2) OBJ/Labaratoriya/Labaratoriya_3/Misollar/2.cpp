#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T diagonallar(T a, T b)
{
    return sqrt(a * a + b * b);
}

template <typename T>
T yuza(T a, T b)
{
    return a * b;
}

template <typename T>
T perimetr(T a, T b)
{
    return 2 * (a + b);
}

int main()
{
    double tomon1, tomon2;
    cin >> tomon1 >> tomon2;

    // Diagonallar
    double diagonal1 = diagonallar(tomon1, tomon2);
    double diagonal2 = diagonal1; // Romb uchun ikkita diagonallar bir xil
    cout << "Diagonal 1: " << diagonal1 << endl;
    cout << "Diagonal 2: " << diagonal2 << endl;

    // Yuza
    double area = yuza(tomon1, tomon2);
    cout << "Rombning yuzasi: " << area << endl;

    // Perimetr
    double perimeter = perimetr(tomon1, tomon2);
    cout << "Rombning perimetri: " << perimeter << endl;

    return 0;
}
