#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << " N = ";
	cin >> n;

	if (n % 4 == 0 and n % 100 != 0 or n % 400 == 0)
	{
		cout << n << " - Yil kabisa yili ";
	}
	else
	{
		cout << n << " - Yil kabisa yili emas";
	}

	return 0;
}
