#include <iostream>

using namespace std;

int main()
{
	int n, f = 1, k = 0;
	cout << " N = ";
	cin >> n;
	while (n > f)
	{
		f *= 2;
		k++;
	}
	cout << " 2 ^ " << k << " = " << n;
	return 0;
}