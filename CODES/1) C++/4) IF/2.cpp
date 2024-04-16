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
	else
	{
		n -= 2;
	}
	cout << " N = " << n;
	return 0;
}