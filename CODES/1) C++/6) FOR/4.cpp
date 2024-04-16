#include <iostream>

using namespace std;

int main()
{
	float k, x;
	cout << " KONFET NARXI = ";
	cin >> k;
	for (int i = 1; i <= 10; i++)
	{
		x = k * i;
		cout << i << " KG NARXI = " << x << endl;
	}
	return 0;
}