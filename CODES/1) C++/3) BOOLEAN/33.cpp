#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << " A = ";
	cin >> a;
	cout << " B = ";
	cin >> b;
	cout << " C = ";
	cin >> c;
	bool l = (a + b > c and a + c > b and b + c > a);
	cout << l;
	return 0;
}