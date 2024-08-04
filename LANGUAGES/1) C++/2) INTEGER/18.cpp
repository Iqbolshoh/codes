#include <iostream>

using namespace std;

int main()
{
	int n, ming;
	cout << " N = ";
	cin >> n;
	ming = n / 1000 % 10;
	cout << " Minglik = " << ming;
	return 0;
}