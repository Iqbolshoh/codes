#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout << " N = ";
	cin >> n;
	int a[n], b;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			b = a[i + 1];
		}
		if (i % 2 == 1)
		{
			a[i] = a[i - 1];
			a[i - 1] = b;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << endl
			 << "A[" << i << "] = " << a[i];
	}
	return 0;
}