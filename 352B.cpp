// Jeff and Periods
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	map<int, vector<int>> mp;
	vector<pair<int, int>> v;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		mp[a[i]].push_back(i);
	}

	for (auto it = mp.begin(); it != mp.end(); ++it)
	{
		int key = it->first;
		vector<int> &val = it->second;
		int p = (val.size() > 1 ? val[1] - val[0] : 0);
		bool flag = true;
		for (int j = 2; j < val.size(); j++)
		{
			if (val[j] - val[j - 1] != p)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			v.push_back({key, p});
	}
	cout << v.size() << endl;
	for (pair<int, int> i : v)
		cout << i.first << ' ' << i.second << endl;
}