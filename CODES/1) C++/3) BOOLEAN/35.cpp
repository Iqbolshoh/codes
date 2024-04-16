#include <iostream>

using namespace std;

int main()
{
	int x1, y1, x2, y2;
	bool l;
	cout << " X1 = ";
	cin >> x1;
	cout << " Y1 = ";
	cin >> y1;
	cout << " X2 = ";
	cin >> x2;
	cout << " Y2 = ";
	cin >> y2;
	l = ((x1 + y1) % 2 == (x2 + y2) % 2);
	cout << l;
	return 0;
}