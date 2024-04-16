#include <iostream>

using namespace std;

int main()
{
	int n, s = 0;
	cout << " N = ";
	cin >> n;
	for (int i = 1; i <= n * 2; i += 2)
	{
		s += i;
	}
	cout << " Kvadrat = " << s;
	return 0;
}