// Letter
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m, x1 = 50, y1 = 50, x2 = 0, y2 = 0;
	scanf("%d%d", &n, &m);
	string s[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (s[i][j] == '*')
			{
				x1 = min(x1, i);
				y1 = min(y1, j);
				x2 = max(x2, i);
				y2 = max(y2, j);
			}
	for (int i = x1; i <= x2; i++)
	{
		for (int j = y1; j <= y2; j++)
			cout << s[i][j];
		cout << '\n';
	}
}