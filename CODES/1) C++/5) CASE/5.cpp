#include <iostream>

using namespace std;

int main()
{
	float a, b, c;
	int n;
	cout << " A = ";
	cin >> a;
	cout << " amal = ";
	cin >> n;
	cout << " B = ";
	cin >> b;
	switch (n)
	{
	case 1:
		c = a + b;
		break;
	case 2:
		c = a - b;
		break;
	case 3:
		c = a / b;
		break;
	case 4:
		c = a * b;
		break;
	}
	cout << " Natija = " << c;

	return 0;
}