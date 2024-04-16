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
	case 2:
	case 12:
		cout << " Qish " << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << " Bahor " << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << " Yoz " << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << " Kuz " << endl;
		break;
	}
	return 0;
}