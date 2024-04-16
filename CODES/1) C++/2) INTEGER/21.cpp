#include <iostream>

using namespace std;

int main()
{
	int n, min, sec;
	cout << " Sekund = ";
	cin >> n;
	min = n / 60;
	sec = n % 60;
	cout << " Minut = " << min << endl;
	cout << " Sekund = " << sec;
	return 0;
}