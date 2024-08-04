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
	for (int i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n / 2 + i];
		a[n / 2 + i] = b;
	}
	for (int i = 0; i < n; i++)
	{
		cout << endl
			 << "A[" << i << "] = " << a[i];
	}
	return 0;
}