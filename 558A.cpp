// Lala Land and Apple Trees
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x, y, c = 0;
	scanf("%d", &n);
	vector<pair<int, int>> neg, pos;
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &x, &y);
		pair<int, int> p = make_pair(x, y);
		if (x < 0)
			neg.push_back(p);
		else
			pos.push_back(p);
	}
	sort(pos.begin(), pos.end());
	sort(neg.begin(), neg.end(), greater<pair<int, int>>());
	int i;
	for (i = 0; i < min(pos.size(), neg.size()); i++)
		c += pos[i].second + neg[i].second;
	if (i != pos.size())
		c += pos[i].second;
	else if (i != neg.size())
		c += neg[i].second;
	cout << c;
}