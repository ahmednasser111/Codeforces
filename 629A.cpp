// Far Relative’s Birthday Cake
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, c, res = 0;
	scanf("%d", &n);
	char s[n][n];
	for (int i = 0; i < n; i++)
	{
		c = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> s[i][j];
			if (s[i][j] == 'C')
				c++;
		}
		res += ((c - 1) * c) / 2;
	}
	for (int i = 0; i < n; i++)
	{
		c = 0;
		for (int j = 0; j < n; j++)
			if (s[j][i] == 'C')
				c++;
		res += ((c - 1) * c) / 2;
	}
	cout << res;
}