// Effective Approach
#include <bits\stdc++.h>
using namespace std;
int main()
{
	long long n, m, c1 = 0, c2 = 0, x;
	map<long long, int> mp;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		mp[x] = i;
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		c1 += mp[x];
		c2 += n - mp[x] + 1;
	}
	cout << c1 << ' ' << c2;
}