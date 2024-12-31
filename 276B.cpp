// Little Girl and Game
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s;
	vector<int> v(26, 0);
	cin >> s;
	int n = s.length(), c = n;

	for (int i = 0; i < n; i++)
	{
		v[s[i] - 'a']++;
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 2 == 0)
		{
			c -= v[i];
			v.erase(v.begin() + i);
			i--;
		}
	}
	if (v.size() > 1)
	{
		c -= *max_element(v.begin(), v.end());
		cout << (c % 2 ? "Second" : "First");
	}
	else
		cout << "First";
}