#include <iostream>

using namespace std;

int main()
{
	int f = 1, n;
	cout << " N = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		f = f * i;
	}
	cout << " Kopaytma = " << f;
	return 0;
}