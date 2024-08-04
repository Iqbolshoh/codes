#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cout << " N = ";
	cin >> n;
	k = n % 100;
	switch (k)
	{
	case 0:
		cout << n / 100 << " - asr ";
		break;
	default:
		cout << n / 100 + 1 << " - asr ";
		break;
	}

	return 0;
}