// Table
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m, x;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &x);
			if (x && (j == m - 1 || j == 0 || i == 0 || i == n - 1))
			{
				cout << 2;
				return 0;
			}
		}
	cout << 4;
}