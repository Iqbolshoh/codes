#include <iostream>

using namespace std;

template <typename T>
class Calculator
{
public:
    T add(T x, T y)
    {
        return x + y;
    }

    T subtract(T x, T y)
    {
        return x - y;
    }

    T multiply(T x, T y)
    {
        return x * y;
    }

    T divide(T x, T y)
    {
        if (y == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return x / y;
    }
};

int main()
{
    Calculator<int> intCalculator;
    cout << "Integer calculations:" << endl;
    cout << "Addition: " << intCalculator.add(5, 3) << endl;
    cout << "Subtraction: " << intCalculator.subtract(5, 3) << endl;
    cout << "Multiplication: " << intCalculator.multiply(5, 3) << endl;
    cout << "Division: " << intCalculator.divide(5, 3) << endl;

    Calculator<double> doubleCalculator;
    cout << "\nDouble calculations:" << endl;
    cout << "Addition: " << doubleCalculator.add(5.5, 3.3) << endl;
    cout << "Subtraction: " << doubleCalculator.subtract(5.5, 3.3) << endl;
    cout << "Multiplication: " << doubleCalculator.multiply(5.5, 3.3) << endl;
    cout << "Division: " << doubleCalculator.divide(5.5, 3.3) << endl;

    return 0;
}
