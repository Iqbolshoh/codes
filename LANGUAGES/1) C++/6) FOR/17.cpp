#include <iostream>

using namespace std;

int main()
{
	int a, n, k = 1, s = 0;
	cout << " Son = ";
	cin >> a;
	cout << " Daraja = ";
	cin >> n;
	for (float i = 0; i <= n; i++)
	{
		s += k;
		cout << i << " - Daraja = " << k << endl;
		k *= a;
	}
	cout << " Yigindi = " << s;
	return 0;
}