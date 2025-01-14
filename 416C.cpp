// Booking System
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, c = 0;
	scanf("%d", &n);
	vector<tuple<int, int, int>> a(n);
	vector<pair<int, int>> ret;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		scanf("%d%d", &x, &y);
		a[i] = {y, x, i + 1};
	}

	scanf("%d", &k);
	vector<pair<int, int>> b(k);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &b[i].first);
		b[i].second = i + 1;
	}

	sort(b.begin(), b.end());
	sort(a.rbegin(), a.rend());

	for (int i = 0; i < n; i++)
	{
		auto [money, size, idx] = a[i];
		int x = lower_bound(b.begin(), b.end(), make_pair(size, 0), [](const pair<int, int> &p1, const pair<int, int> &p2)
							{ return p1.first < p2.first; }) -
				b.begin();
		if (x < b.size())
		{
			c += money;
			ret.push_back({idx, b[x].second});
			b.erase(b.begin() + x);
		}
	}

	cout << ret.size() << " " << c << endl;

	for (auto [x, y] : ret)
		cout << x << " " << y << endl;
}
