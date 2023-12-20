// Summer sell-off
#include <bits\stdc++.h>
using namespace std;

int main()
{
	auto comparator = [](const auto &a, const auto &b)
	{
		return min(a.first * 2, a.second) - min(a.first, a.second) > min(b.first * 2, b.second) - min(b.first, b.second);
	};
	int n, f;
	long long c = 0;
	scanf("%d%d", &n, &f);
	pair<int, int> a[n];
	for (int i = 0; i < n; i++)
		scanf("%d%d", &a[i].first, &a[i].second);
	sort(a, a + n, comparator);
	for (int i = 0; i < n; i++)
	{
		if (f)
		{
			a[i].first *= 2;
			f--;
		}
		c += min(a[i].first, a[i].second);
	}
	cout << c;
}