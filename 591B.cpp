// Rebranding
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m;
	string s;
	char x, y;
	vector<char> v(26);
	iota(v.begin(), v.end(), 'a');

	cin >> n >> m >> s;

	for (int i = 0; i < m; i++)
	{
		cin >> x >> y;

		for (int j = 0; j < 26; j++)
		{
			if (v[j] == x)
			{
				v[j] = y;
			}
			else if (v[j] == y)
			{
				v[j] = x;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (v[s[i] - 'a'])
			s[i] = v[s[i] - 'a'];
	}
	cout << s;
}