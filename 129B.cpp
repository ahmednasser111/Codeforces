// Students and Shoelaces
#include <bits\stdc++.h>
using namespace std;

int main()
{
	int n, m, c = 0;
	scanf("%d%d", &n, &m);
	vector<vector<int>> v(n + 1);

	for (int i = 0; i < m; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);

		v[a].push_back(b);
		v[b].push_back(a);
	}
	bool b = 0;
	for (int i = 1; i <= n; i++)
	{
		if (v[i].size() == 1)
		{
			b = 1;
			break;
		}
	}
	while (b)
	{
		vector<bool> visited(n + 1, false);
		for (int i = 1; i <= n; i++)
		{
			if (v[i].size() == 1 && !visited[i])
			{
				auto it = find(v[v[i][0]].begin(), v[v[i][0]].end(), i);
				v[v[i][0]].erase(it);
				visited[v[i][0]] = 1;
				v[i].erase(v[i].begin());
			}
		}
		b = 0;
		for (int i = 1; i <= n; i++)
		{
			if (v[i].size() == 1)
			{
				b = 1;
				break;
			}
		}
		c++;
	}

	// for (int i = 1; i <= m; i++)
	// 	for (int j = 0; j < v[i].size(); j++)
	// 		cout << i << " : " << v[i][j] << endl;

	cout << c << endl;
}
