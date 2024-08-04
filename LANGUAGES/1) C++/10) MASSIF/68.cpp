#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, max, min, b = 0, c = 0;
	cout << " N = ";
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
		{
			max = a[i];
			min = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
			b = i;
		}
		if (a[i] > max)
		{
			max = a[i];
			c = i;
		}
	}
	a[c] = min;
	a[b] = max;
	for (int i = 0; i < n; i++)
	{
		cout << endl
			 << "A[" << i << "] = " << a[i];
	}
	return 0;
}