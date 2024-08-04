#include <iostream>

using namespace std;

int main()
{
	int a, b, c, max, min;
	cout << " A = ";
	cin >> a;
	cout << " B = ";
	cin >> b;
	cout << " C = ";
	cin >> c;

	if (a > b and a > c)
	{
		max = a;
	}
	if (b > a and b > c)
	{
		max = b;
	}
	if (c > a and c > b)
	{
		max = c;
	}

	if (a < b and a < c)
	{
		min = a;
	}
	if (b < a and b < c)
	{
		min = b;
	}
	if (c < a and c < b)
	{
		min = c;
	}

	cout << " min : " << min << endl;
	cout << " max : " << max;
	return 0;
}