#include <iostream>

using namespace std;

int main()
{
    double R1, R2, R3;
    cin >> R1 >> R2 >> R3;
    double qar = 1.0 / (1.0 / R1 + 1.0 / R2 + 1.0 / R3);
    printf("%.2f", qar);
    return 0;
}
