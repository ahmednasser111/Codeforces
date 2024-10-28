// Meeting
#include <bits/stdc++.h>
using namespace std;
int distance(int xa, int ya, int xb, int yb)
{
	return (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
}
int main()
{
	int xa, xb, ya, yb, n, x, y, r, c = 0;
	cin >> xa >> ya >> xb >> yb >> n;
	vector<pair<int, int>> generals;

	if (xb < xa)
		swap(xa, xb);
	if (yb < ya)
		swap(ya, yb);
	for (int i = xa + 1; i < xb; i++)
	{
		generals.push_back({i, yb});
		generals.push_back({i, ya});
	}
	for (int i = ya; i <= yb; i++)
	{
		generals.push_back({xa, i});
		generals.push_back({xb, i});
	}

	vector<tuple<int, int, int>> radiators;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y >> r;
		radiators.push_back({x, y, r});
	}

	for (auto &[xg, yg] : generals)
	{
		bool isWarm = 0;
		for (auto &[x, y, r] : radiators)
		{
			if (distance(x, y, xg, yg) <= r * r)
			{
				isWarm = 1;
				break;
			}
		}
		if (!isWarm)
			c++;
	}
	cout << c << endl;
}