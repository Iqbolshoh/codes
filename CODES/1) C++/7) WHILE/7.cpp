#include <iostream>

using namespace std;

int main()
{
	int n, k = 0;
	cout << " N = ";
	cin >> n;
	while (k * k <= n)
	{
		k++;
	}
	cout << " k = " << k;
	return 0;
}