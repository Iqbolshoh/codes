#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	float a[n], b[n], c = 0, s = 0;
	for (int i = 0; i < n; i++)
	{
		cout << " A[" << i << "] = ";
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		c++;
		s += a[i];
		b[i] = s / c;
	}
	for (int i = 0; i < n; i++)
	{
		cout << endl
			 << " B[" << i << "] = " << b[i];
	}
	return 0;
}