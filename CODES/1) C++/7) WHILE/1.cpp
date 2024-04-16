#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << " a = ";
	cin >> a;
	cout << " b = ";
	cin >> b;
	while (a >= b)
	{
		a = a - b;
	}
	cout << " qoldiq = " << a;
	return 0;
}