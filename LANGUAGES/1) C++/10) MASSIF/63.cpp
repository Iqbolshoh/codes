#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[5], b[5], c[10];
	for (int i = 0; i < 5; i++)
	{
		cout << " A[" << i << "] = ";
		cin >> a[i];
		c[i] = a[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << " B[" << i << "] = ";
		cin >> b[i];
		c[i + 5] = b[i];
	}
	sort(c, c + 10);
	for (int i = 0; i < 10; i++)
	{
		cout << endl
			 << " C[" << i << "] = " << c[i];
	}
	return 0;
}