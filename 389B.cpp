// Fox and Cross
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);

	char a[n][n];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 1; j < n - 1; j++)
		{
			if (a[i][j] == '#' && a[i][j - 1] == '#' && a[i][j + 1] == '#' && a[i - 1][j] == '#' && a[i + 1][j] == '#')
			{
				a[i][j] = a[i][j - 1] = a[i][j + 1] = a[i - 1][j] = a[i + 1][j] = '.';
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == '#')
			{
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
}