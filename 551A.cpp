// GukiZ and Contest
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, c;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < n; i++)
	{
		c = 1;
		for (int j = 0; j < n; j++)
			if (a[j] > a[i])
				c++;
		cout << c << ' ';
	}
}