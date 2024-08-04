#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n], b[n], c = 0;
	for (int i = 0; i < n; i++)
	{
		cout << " A[" << i << "] = ";
		cin >> a[i];
		if (a[i] % 2 == 0)
		{
			b[c] = a[i];
			c++;
		}
	}
	cout << endl
		 << c << " ta B elementi " << endl;
	for (int i = 0; i < c; i++)
	{
		cout << endl
			 << " B[" << i << "] = " << b[i];
	}

	return 0;
}