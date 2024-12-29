// Painting Eggs
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	long long diff = 0;
	string s;
	scanf("%d", &n);

	pair<int, int> a[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &a[i].first, &a[i].second);
	}

	for (int i = 0; i < n; i++)
	{
		if (abs(diff - a[i].second) < abs(diff + a[i].first))
		{
			diff -= a[i].second;
			s += 'G';
		}
		else
		{
			diff += a[i].first;
			s += 'A';
		}
	}
	if (abs(diff) <= 500)
		cout << s;
	else
		cout << -1;
}