#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c, d, e;
	cout << " A = ";
	cin >> a;
	cout << " B = ";
	cin >> b;
	cout << " C = ";
	cin >> c;
	d = (a / c) * (b / c);
	e = (a * b) - d * pow(c, 2);
	cout << d << " ta joylashgan " << endl;
	cout << e << " m^2 joylashmagan qismi ";
	return 0;
}