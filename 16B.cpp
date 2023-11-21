// Burglar and Matches
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m, c = 0;
	scanf("%d%d", &n, &m);
	pair<int, int> p[m];
	for (int i = 0; i < m; i++)
		scanf("%d%d", &p[i].second, &p[i].first);
	sort(p, p + m, greater<pair<int, int>>());
	for (int i = 0; i < m && n > 0; i++)
	{
		c += min(n, p[i].second) * p[i].first;
		n -= min(n, p[i].second);
	}
	cout << c;
}