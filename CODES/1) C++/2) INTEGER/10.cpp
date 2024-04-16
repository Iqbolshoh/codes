#include <iostream>

using namespace std;

int main()
{
	int n, bir, on;
	cout << " ABC = ";
	cin >> n;
	bir = n % 10;
	on = n / 10 % 10;
	cout << " Birlik = " << bir << endl;
	cout << " O'nlik = " << on;
	return 0;
}