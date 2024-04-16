#include <iostream>

using namespace std;

int main()
{
	int n, k, c = 0;
	cout << " n = ";
	cin >> n;
	cout << " k = ";
	cin >> k;
	while (n >= k)
	{
		n = n - k;
		c++;
	}
	cout << c << " marta " << endl;
	cout << " qoldiq = " << n;
	return 0;
}