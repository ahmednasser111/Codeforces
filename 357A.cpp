// Group of Students
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int m, x, y, c = 0, sum = 0;
	scanf("%d", &m);
	int a[m];
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	scanf("%d%d", &x, &y);
	for (int i = 0; i < m; i++)
	{
		c += a[i];
		if (c >= x && c <= y && (sum - c) >= x && (sum - c) <= y)
		{
			cout << i + 2;
			return 0;
		}
	}
	cout << 0;
}