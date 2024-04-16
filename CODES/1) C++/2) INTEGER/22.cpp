#include <iostream>

using namespace std;

int main()
{
	int n, soat, sec;
	cout << " Sekund = ";
	cin >> n;
	soat = n / 3600;
	sec = n % 3600;
	cout << " Soat = " << soat << endl;
	cout << " Sekund = " << sec;
	return 0;
}