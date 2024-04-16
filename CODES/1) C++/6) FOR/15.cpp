#include <iostream>

using namespace std;

int main()
{
	int a, n, k = 1;
	cout << " Son = ";
	cin >> a;
	cout << " Daraja = ";
	cin >> n;
	for (float i = 1; i <= n; i++)
	{
		k *= a;
	}
	cout << " Natija = " << k;
	return 0;
}