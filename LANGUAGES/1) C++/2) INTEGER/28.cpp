#include <iostream>

using namespace std;

int main()
{
	int n, k, m;
	cout << " N = ";
	cin >> n;
	cout << " K = ";
	cin >> k;
	m = (k + n - 1) % 7;
	switch (m)
	{
	case 0:
		cout << " Yakshanba ";
		break;
	case 1:
		cout << " Dushanba ";
		break;
	case 2:
		cout << " Seshanba ";
		break;
	case 3:
		cout << " Chorshanba ";
		break;
	case 4:
		cout << " Payshanba ";
		break;
	case 5:
		cout << " Juma ";
		break;
	case 6:
		cout << " Shanba ";
		break;
	}
	return 0;
}