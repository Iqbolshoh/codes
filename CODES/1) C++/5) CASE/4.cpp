#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cout << " N = ";
	cin >> n;
	switch (n)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		k = 31;
		break;
	case 2:
		k = 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		k = 30;
		break;
	}
	cout << k << " Kun ";
	return 0;
}