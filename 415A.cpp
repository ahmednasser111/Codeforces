// Mashmokh and Lights
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a[m], r[n] = {0};
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &a[i]);
		for (int j = a[i] - 1; j < n; j++)
		{
			if (r[j] == 0)
				r[j] = a[i];
		}
	}
	for (int i = 0; i < n; i++)
		cout << r[i] << " ";
}