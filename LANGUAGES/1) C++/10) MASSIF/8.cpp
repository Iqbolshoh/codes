#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n], k = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 1)
		{
			cout << a[i] << endl;
			k++;
		}
	}
	cout << endl
		 << k << " Ta toq element";
	return 0;
}