// Duff and Meat
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, mp = 100, ans = 0;
	scanf("%d", &n);
	int a[n], p[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &a[i], &p[i]);
		mp = min(mp, p[i]);
		ans += a[i] * mp;
	}
	cout << ans;
}