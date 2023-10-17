// Bicycle Chain
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m, c = 0, ans = 0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	int b[m];
	for (int i = 0; i < m; i++)
		scanf("%d", &b[i]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (b[j] % a[i] == 0)
				c = max(b[j] / a[i], c);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (b[j] % a[i] == 0 && b[j] / a[i] == c)
				ans++;
	cout << ans;
}