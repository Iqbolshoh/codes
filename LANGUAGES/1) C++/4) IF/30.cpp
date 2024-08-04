#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << " N = ";
	cin >> n;
	if (n > 99 and n <= 999)
	{
		cout << " 3 xonali ";
	}
	if (n > 9 and n <= 99)
	{
		cout << " 2 xonali ";
	}
	if (n >= 1 and n <= 9)
	{
		cout << " 1 xonali ";
	}
	if (n % 2 == 0)
	{
		cout << " Juft son ";
	}
	else
	{
		cout << " Toq son ";
	}
	return 0;
}