#include <iostream>

using namespace std;

int main()
{
	int n, soat, min, sec;
	cout << " Sekund = ";
	cin >> n;
	soat = n / 3600;
	n = n % 3600;
	min = n / 60;
	sec = n % 60;
	cout << " Soat = " << soat << endl;
	cout << " Minut = " << min << endl;
	cout << " Sekund = " << sec;
	return 0;
}