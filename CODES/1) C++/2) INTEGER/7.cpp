#include <iostream>

using namespace std;

int main()
{
	int n, on, bir, S;
	cout << " AB = ";
	cin >> n;
	on = n / 10;
	bir = n % 10;
	S = on + bir;
	cout << " Raqamlari yig'indisi = " << S;
	return 0;
}