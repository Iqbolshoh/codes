#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float x;
	cout << " X = ";
	cin >> x;
	if (x > 0 and x < 2)
	{
		x = pow(x, 2);
	}
	else if (x >= 2)
	{
		x = 4;
	}
	else if (x <= 0)
	{
		x *= -1;
	}
	cout << " F(x) = " << x;
	return 0;
}