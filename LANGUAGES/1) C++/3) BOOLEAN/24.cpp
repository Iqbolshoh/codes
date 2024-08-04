#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c, D;
	bool l;
	cout << " A = ";
	cin >> a;
	cout << " B = ";
	cin >> b;
	cout << " C = ";
	cin >> c;
	D = pow(b, 2) - 4 * a * c;
	l = (D > 0 or D == 0);
	cout << l;
	return 0;
}