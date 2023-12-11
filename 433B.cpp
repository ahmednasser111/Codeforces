// Kuriyama Mirai's Stones
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m, t, l, r;
	scanf("%d", &n);
	long long a[n], b[n], c[n + 1], d[n + 1];
	unsigned long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		c[i] = sum;
		sum += a[i];
	}
	c[n] = sum;
	copy(a, a + n, b);
	sort(b, b + n);
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		d[i] = sum;
		sum += b[i];
	}
	d[n] = sum;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d%d", &t, &l, &r);
		if (t == 1)
			sum = c[r] - c[l - 1];
		else
			sum = d[r] - d[l - 1];
		cout << sum << endl;
	}
}