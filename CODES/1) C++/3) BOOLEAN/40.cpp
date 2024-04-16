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
	l = (abs(x1 - x2) == 1 and abs(y1 - y2) == 2 or abs(x1 - x2) == 2 and abs(y1 - y2) == 1);
	cout << l;
	return 0;
}