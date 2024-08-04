#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << " N = ";
	cin >> n;
	if (n > 0)
	{
		n += 1;
	}
	else if (n < 0)
	{
		n -= 2;
	}
	else
	{
		n = 10;
	}
	cout << " N = " << n;
	return 0;
}