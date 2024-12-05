// Woodcutters
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	if (n < 3)
	{
		cout << n;
		return 0;
	}

	pair<int, int> a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &a[i].first, &a[i].second);
	}
	int prev = a[0].first, c = 2;
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i].first - a[i].second > prev)
		{
			c++;
			prev = a[i].first;
		}
		else if (a[i].first + a[i].second < a[i + 1].first)
		{
			c++;
			prev = a[i].first + a[i].second;
		}
		else
			prev = a[i].first;
	}
	cout << c;
}