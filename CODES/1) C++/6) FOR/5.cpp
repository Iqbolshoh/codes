#include <iostream>

using namespace std;

int main()
{
	float k, x;
	cout << " KONFET NARXI = ";
	cin >> k;
	for (float i = 0.1; i < 1.1; i += 0.1)
	{
		x = k * i;
		cout << i << " KG NARXI = " << x << endl;
	}
	return 0;
}