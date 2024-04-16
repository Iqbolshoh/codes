#include <iostream>
#include <math.h>

using namespace std;

void func(int a, int b, int c, int *P, float *S)
{
    *P = a + b + c;
    int s = *P / 2;
    *S = sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    int a, b, c, P;
    float S;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    cout << " c = ";
    cin >> c;
    func(a, b, c, &P, &S);
    cout << " Perimetr = " << P << endl;
    cout << " Yuza = " << S << endl;
    return 0;
}