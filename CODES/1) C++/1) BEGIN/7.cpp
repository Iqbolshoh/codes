#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float r, L, S;
	cout << " r = ";
	cin >> r;
	L = M_PI * 2 * r;
	S = M_PI * pow(r, 2);
	cout << " L = " << L << endl;
	cout << " S = " << S << endl;
	return 0;
}