#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << " N = ";
	cin >> n;
	switch (n)
	{
	case 1:
		cout << " Yomon " << endl;
		break;
	case 2:
		cout << " Qoniqarsiz " << endl;
		break;
	case 3:
		cout << " Qoniqarli " << endl;
		break;
	case 4:
		cout << " Yaxshi " << endl;
		break;
	case 5:
		cout << " A'lo " << endl;
		break;
	default:
		cout << " Xato ";
	}
	return 0;
}