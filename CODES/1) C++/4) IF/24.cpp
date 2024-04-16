#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x, y;
	cout << " X = ";
	cin >> x;
	if (x > 0)
	{
		y = 2 * sin(x * M_PI / 180);
	}
	else
	{
		y = x - 6;
	}
	cout << " F(x) = " << y;
	return 0;
}