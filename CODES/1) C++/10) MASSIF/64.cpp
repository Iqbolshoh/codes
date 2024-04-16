#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cout << " N = ";
	cin >> n;
	int a[n], b[n], c[n], d[3 * n];
	for (int i = 0; i < n; i++)
	{
		cout << " A[" << i << "] = ";
		cin >> a[i];
		d[i] = a[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << " B[" << i << "] = ";
		cin >> b[i];
		d[i + n] = b[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << " C[" << i << "] = ";
		cin >> c[i];
		d[i + 2 * n] = c[i];
	}
	cout << endl;
	sort(d, d + 3 * n);
	for (int i = 0; i < n * 3; i++)
	{
		cout << " D[" << i << "] = " << d[i] << endl;
	}
	return 0;
}