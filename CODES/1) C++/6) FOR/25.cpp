#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, m = 1;
	float s = 0, x;
	cout << " X = ";
	cin >> x;
	cout << " N = ";
	cin >> n;
	if (abs(x) < 1)
	{
		for (int i = 1; i <= n; i++)
		{
			s += pow(x, i) / i * m;
			m *= -1;
		}
	}
	cout << " Natija = " << s;
	return 0;
}