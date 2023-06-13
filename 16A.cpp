// Flag
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	string a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if (a[i][0] == a[i + 1][0])
		{
			cout << "NO";
			return 0;
		}
		for (int j = 0; j < m - 1; j++)
			if (a[i][j] != a[i][j + 1])
			{
				cout << "NO";
				return 0;
			}
	}
	cout << "YES";
}