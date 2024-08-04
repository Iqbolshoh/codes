#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++)
	{
		cout << " A[" << i << "] = ";
		cin >> a[i];
		b[i] = a[i];
	}
	for (int i = 0; i < n; i += 2)
	{
		cout << endl
			 << " B[" << i << "] = " << b[i];
	}
	cout << endl;
	for (int i = 1; i < n; i += 2)
	{

		cout << endl
			 << " B[" << i << "] = " << b[i];
	}
	return 0;
}