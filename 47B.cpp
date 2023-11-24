// Coins
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s;
	string a[3];
	vector<string> ans;
	for (int i = 0; i < 3; i++)
	{
		cin >> s;
		a[i] = string(1, s[0]) + s[2];
		if (s[1] == '>')
			reverse(a[i].begin(), a[i].end());
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (a[i][0] == a[j][1])
				ans.push_back(string(1, a[j][0]) + a[i]);
			else if (a[i][1] == a[j][0])
				ans.push_back(string(1, a[i][0]) + a[j]);
		}
	}
	cout << (ans.size() > 1 ? "Impossible" : ans[0]);
}