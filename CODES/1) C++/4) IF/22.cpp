#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout << " X = ";
	cin >> x;
	cout << " Y = ";
	cin >> y;
	if (x > 0 and y > 0)
	{
		cout << " 1 - chorak ";
	}
	if (x < 0 and y > 0)
	{
		cout << " 2 - chorak ";
	}
	if (x < 0 and y < 0)
	{
		cout << " 3 - chorak ";
	}
	if (x > 0 and y < 0)
	{
		cout << " 4 - chorak ";
	}
	return 0;
}