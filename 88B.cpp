// Keyboard
#include <bits\stdc++.h>
using namespace std;
double euclidean(pair<int, int> a, pair<int, int> b)
{
	return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}
int main()
{
	map<char, vector<pair<int, int>>> mp;
	map<char, bool> history;
	vector<pair<int, int>> shifts;
	int n, m, x, l, c = 0;
	char chr;
	string s;
	scanf("%d%d%d", &n, &m, &x);
	for (int i = 0; i < n * m; i++)
	{
		cin >> chr;
		if (chr == 'S')
			shifts.push_back(make_pair(i / m, i % m));
		else
			mp[chr].push_back(make_pair(i / m, i % m));
	}

	scanf("%d", &l);
	cin >> s;
	for (int i = 0; i < l; i++)
	{
		if (mp.find(tolower(s[i])) == mp.end() || (isupper(s[i]) && shifts.empty()))
		{
			cout << -1;
			return 0;
		}
		if (isupper(s[i]))
		{
			if (history.find(s[i]) == history.end())
			{

				vector<pair<int, int>> temp = mp[tolower(s[i])];
				bool b = 1;
				for (int q = 0; q < temp.size(); q++)
					for (int j = 0; j < shifts.size(); j++)
					{
						if (euclidean(temp[q], shifts[j]) <= x)
						{
							b = 0;
							break;
						}
						if (!b)
							break;
					}
				if (b)
					c++;
				history[s[i]] = b;
			}
			else
				c += history[s[i]];
		}
	}
	cout << c;
}