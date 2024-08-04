#include <iostream>

using namespace std;

int main()
{
	int n;
	float s = 0;
	cout << " N = ";
	cin >> n;
	for (float i = 1; i <= n; i++)
	{
		s += 1 / i;
	}
	cout << " Yigindi = " << s;
	return 0;
}