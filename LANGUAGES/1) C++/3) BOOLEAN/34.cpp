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
	l = (x + y) % 2 == 1;
	cout << l;
	return 0;
}