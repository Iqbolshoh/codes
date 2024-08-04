#include <iostream>

using namespace std;

int main()
{
	int f = 1, n, s = 0;
	cout << " N = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
		s += f;
	}
	cout << " Kopaytma = " << s;
	return 0;
}