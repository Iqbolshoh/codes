#include <iostream>

using namespace std;

int main()
{
	int n, k = 0;
	cout << " N = ";
	cin >> n;
	while ((k) * (k + 1) <= n)
	{
		k++;
	}
	cout << " k = " << k;
	return 0;
}