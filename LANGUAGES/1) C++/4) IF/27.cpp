#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n < 0)
	{
		n = 0;
	}
	if (n % 2 == 1)
	{
		n = 1;
	}
	else
	{
		n = -1;
	}
	cout << "F(x) = " << n;
	return 0;
}