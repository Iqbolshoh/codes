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
	bool l = (a * a + b * b == c * c or a * a + c * c == b * b or c * c + b * b == a * a);
	cout << l;
	return 0;
}