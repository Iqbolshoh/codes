#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int f = 1, n;
	float s = 1, x;
	cout << " X = ";
	cin >> x;
	cout << " N = ";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		f *= i;
		s += pow(x, i) / f;
	}
	cout << " Natija = " << s;
	return 0;
}