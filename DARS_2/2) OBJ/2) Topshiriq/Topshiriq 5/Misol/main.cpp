#include <iostream>

using namespace std;

class Shapes
{
public:
    static double calculateSquareArea(double side)
    {
        return side * side;
    }
    static double calculateSquarePerimeter(double side)
    {
        return 4 * side;
    }
    static double calculateCircleArea(double radius)
    {
        return 3.14159 * radius * radius;
    }
    static double calculateCircleCircumference(double radius)
    {
        return 2 * 3.14159 * radius;
    }
};
int main()
{
    double squareSide = 5.0;
    double squareArea = Shapes::calculateSquareArea(squareSide);
    double squarePerimeter = Shapes::calculateSquarePerimeter(squareSide);
    cout << "Kvadrat:\n";
    cout << "Yuzasi: " << squareArea << "\n";
    cout << "Perimetri: " << squarePerimeter << "\n\n";
    double circleRadius = 3.0;
    double circleArea = Shapes::calculateCircleArea(circleRadius);
    double circleCircumference = Shapes::calculateCircleCircumference(circleRadius);
    cout << "Doira:\n";
    cout << "Yuzasi: " << circleArea << "\n";
    cout << "Perimetri: " << circleCircumference << "\n";
    return 0;
}