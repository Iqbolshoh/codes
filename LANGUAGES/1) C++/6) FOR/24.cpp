#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int f = 1, n, m = -1;
	float s = 1, x;
	cout << " X = ";
	cin >> x;
	cout << " N = ";
	cin >> n;
	for (int i = 1; i < n * 2; i++)
	{
		f *= i;
		if (i % 2 == 0)
		{
			s += pow(x, i) / f * m;
			m *= -1;
		}
	}
	cout << " Natija = " << s;
	return 0;
}