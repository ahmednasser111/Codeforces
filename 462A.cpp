// Appleman and Easy Task
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, c;
	scanf("%d", &n);
	char a[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	for (int i = 0; i < n; i++)
	{
		c = 0;
		for (int j = 0; j < n; j++)
		{
			if (j < n - 1)
				c += a[i][j + 1] == 'o';
			if (j > 0)
				c += a[i][j - 1] == 'o';
			if (i > 0)
				c += a[i - 1][j] == 'o';
			if (i < n - 1)
				c += a[i + 1][j] == 'o';
			if (c & 1)
			{
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
}