#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n], b[n], c[n], d = 0, e = 0;
	for (int i = 0; i < n; i++)
	{
		cout << " A[" << i << "] = ";
		cin >> a[i];
		if (a[i] > 0)
		{
			b[d] = a[i];
			d++;
		}
		if (a[i] < 0)
		{
			c[e] = a[i];
			e++;
		}
	}
	cout << endl
		 << d << " ta B elementi ";
	for (int i = 0; i < d; i++)
	{
		cout << endl
			 << " B[" << i << "] = " << b[i];
	}
	cout << endl
		 << endl
		 << e << " ta C elementi ";
	for (int i = 0; i < e; i++)
	{
		cout << endl
			 << " C[" << i << "] = " << c[i];
	}
	return 0;
}