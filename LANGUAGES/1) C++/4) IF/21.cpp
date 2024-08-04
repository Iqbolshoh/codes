#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout << " X = ";
	cin >> x;
	cout << " Y = ";
	cin >> y;
	if (x == 0 and y == 0)
	{
		cout << " 0 ";
	}
	if (x == 0 and y != 0)
	{
		cout << " 1 ";
	}
	if (x != 0 and y == 0)
	{
		cout << " 2 ";
	}
	if (x != 0 and y != 0)
	{
		cout << " 3 ";
	}
	return 0;
}