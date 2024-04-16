#include <iostream>

using namespace std;

int main()
{
	int n, yuz, on, bir, S;
	cout << " ABC = ";
	cin >> n;
	yuz = n / 100;
	on = n / 10 % 10;
	bir = n % 10;
	S = yuz * 100 + bir * 10 + on;
	cout << " ACB = " << S;
	return 0;
}