#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cout << " N = ";
	cin >> n;
	cout << " K = ";
	cin >> k;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> a[i];
		a[i] += k;
	}
	for (int i = 0; i < n; i++)
	{
		cout << endl
			 << "A[" << i << "] = " << a[i];
	}
	return 0;
}