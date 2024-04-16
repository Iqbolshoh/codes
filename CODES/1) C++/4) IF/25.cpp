#include <iostream>

using namespace std;

int main()
{
	float x;
	cout << " X = ";
	cin >> x;
	if (x < -2 or x > 2)
	{
		x *= 2;
	}
	else
	{
		x *= -3;
	}
	cout << " F(x) = " << x;
	return 0;
}