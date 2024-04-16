#include <iostream>

using namespace std;

int main()
{
	int x, y;
	bool l;
	cout << " X = ";
	cin >> x;
	cout << " Y = ";
	cin >> y;
	l = (x < 0 and y > 0);
	cout << l;
	return 0;
}