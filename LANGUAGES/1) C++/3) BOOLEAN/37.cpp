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
	l = (abs(x1 - x2) == 1 and abs(y1 - y2) == 1 or x1 == x2 and abs(y1 - y2) == 1 or y1 == y2 and abs(x1 - x2) == 1);
	cout << l;
	return 0;
}