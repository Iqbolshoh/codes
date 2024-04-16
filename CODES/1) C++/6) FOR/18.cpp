#include <iostream>

using namespace std;

int main()
{
	int a, n, k = 1, s = 0, m = 1;
	cout << " Son = ";
	cin >> a;
	cout << " Daraja = ";
	cin >> n;
	for (float i = 0; i <= n; i++)
	{
		s += k * m;
		cout << i << " - Daraja = " << k << endl;
		k *= a;
		m *= -1;
	}
	cout << " Yigindi = " << s;
	return 0;
}