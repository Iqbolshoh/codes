#include <iostream>

using namespace std;

int main()
{
	int a, b, c = 0;
	cout << " a = ";
	cin >> a;
	cout << " b = ";
	cin >> b;
	while (a >= b)
	{
		a = a - b;
		c++;
	}
	cout << c << " marta joylashadi ";
	return 0;
}