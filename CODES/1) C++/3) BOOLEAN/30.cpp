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
	bool l = (a == b and b == c);
	cout << l;
	return 0;
}