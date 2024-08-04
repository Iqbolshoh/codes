#include <iostream>

using namespace std;

int main()
{
	int a, b, c, max1, max2;
	cout << " A = ";
	cin >> a;
	cout << " B = ";
	cin >> b;
	cout << " C = ";
	cin >> c;

	if (a > b and b > c or b > a and a > c)
	{
		max1 = a;
		max2 = b;
	}
	if (b > c and c > a or c > b and b > a)
	{
		max1 = b;
		max2 = c;
	}
	if (c > a and a > b or a > c and c > b)
	{
		max1 = c;
		max2 = a;
	}

	cout << " Max1 : " << max1 << endl;
	cout << " Max2 : " << max2;
	return 0;
}