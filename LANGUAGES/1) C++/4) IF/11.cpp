#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << " A = ";
	cin >> a;
	cout << " B = ";
	cin >> b;
	if (a == b)
	{
		a = 0;
		b = 0;
	}
	else if (a > b)
	{
		b = a;
	}
	else
	{
		a = b;
	}
	cout << " A = " << a << endl;
	cout << " B = " << b;
}