#include <iostream>

using namespace std;

int main()
{
	int a, b, c, orta;
	cout << " A = ";
	cin >> a;
	cout << " B = ";
	cin >> b;
	cout << " C = ";
	cin >> c;
	
	if (b < a and a < c or b > a and a > c)
	{
		orta = a;
	}
	if (a < b and b < c or a > b and b > c)
	{
		orta = b;
	}
	if (a < c and c < b or a > c and c > b)
	{
		orta = c;
	}

	cout << " O'rtacha qiymat = " << orta << endl;
	return 0;
}