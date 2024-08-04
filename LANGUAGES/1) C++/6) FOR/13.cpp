#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	float k = 1.1, s = 0;
	cout << " N = ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		s += k * pow(-1, i + 1);
		k += 0.1;
	}
	cout << " Yigindi = " << s << endl;
	return 0;
}