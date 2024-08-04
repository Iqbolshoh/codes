#include <iostream>

using namespace std;

int main()
{
	int n;
	float f = 1, s = 1;
	cout << " N = ";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		f *= i;
		s += 1 / f;
	}
	cout << " Natija = " << s;
	return 0;
}