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
	S = bir * 100 + yuz * 10 + on;
	cout << " CAB = " << S;
	return 0;
}