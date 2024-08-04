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
	S = yuz + on + bir;
	cout << " Raqamlari yigindisi = " << S;
	return 0;
}