#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << " N = ";
	cin >> n;
	if (n > 0)
	{
		cout << " Musbat ";
	}
	if (n < 0)
	{
		cout << " Manfiy ";
	}

	if (n % 2 == 1)
	{
		cout << " Toq son ";
	}
	else
	{
		cout << " Juft son ";
	}

	return 0;
}