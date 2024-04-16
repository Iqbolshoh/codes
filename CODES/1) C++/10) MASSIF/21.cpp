#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, l, c = 0;
	float d, s = 0;
	cin >> n >> k >> l;
	int a[n];
	for (int i = k + 1; i < l; i++)
	{
		a[i] = i;
		s += a[i];
		c++;
		cout << "A[" << i << "]=" << a[i] << endl;
	}
	d = s / c;
	cout << "O'rta arimetigi:" << d;
	return 0;
}