#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x, y;
	cout << " x = ";
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << " y = " << y;
	return 0;
}