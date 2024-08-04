#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float r1, r2, S1, S2, S3;
	cout << " r1 = ";
	cin >> r1;
	cout << " r2 = ";
	cin >> r2;
	S1 = M_PI * pow(r1, 2);
	S2 = M_PI * pow(r2, 2);
	S3 = M_PI * (r1 - r2);
	cout << " S1 = " << S1 << endl;
	cout << " S2 = " << S2 << endl;
	cout << " S3 = " << S3 << endl;
	return 0;
}