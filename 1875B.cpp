// Jellyfish and Game
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, m, k;
		scanf("%d %d %d", &n, &m, &k);
		int a[n], b[m];
		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (int i = 0; i < m; i++)
			scanf("%d", &b[i]);
		sort(a, a + n);
		sort(b, b + m);
		if (a[0] < b[m - 1])
			swap(a[0], b[m - 1]);
		long long sum = 0;
		for (int i = 0; i < n; i++)
			sum += a[i];
		cout << (k & 1 ? sum : sum - *max_element(a, a + n) + *min_element(b, b + m)) << endl;
	}
}