#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a, b, c, P;
	cout << " a = ";
	cin >> a;
	cout << " b = ";
	cin >> b;
	c = sqrt(pow(a, 2) + pow(b, 2));
	P = a + b + c;
	cout << " GIPOTENUZA = " << c << endl;
	cout << " PEREMETR = " << P << endl;
	return 0;
}