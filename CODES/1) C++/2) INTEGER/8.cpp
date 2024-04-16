#include <iostream>

using namespace std;

int main()
{
	int n, on, bir, k;
	cout << " AB = ";
	cin >> n;
	on = n / 10;
	bir = n % 10;
	k = bir * 10 + on;
	cout << " BA = " << k;
	return 0;
}