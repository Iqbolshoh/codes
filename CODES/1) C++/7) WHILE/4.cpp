#include <iostream>

using namespace std;

int main()
{
	int n, k = 1;
	cout << " N = ";
	cin >> n;
	while (n > k)
	{
		k *= 3;
	}
	cout << " 3 ning darajasi ";
	if (n != k)
	{
		cout << " emas ";
	}
	return 0;
}