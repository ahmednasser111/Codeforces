// Vitaliy and Pie
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, c = 0;
	string s;
	map<char, int> mp;
	scanf("%d", &n);
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for (int i = 1; i < 2 * n - 2; i += 2)
		if (s[i] != s[i - 1])
		{
			mp[s[i - 1]]++;
			if (mp[s[i]] == 0)
				c++;
			else
				mp[s[i]]--;
		}
	cout << c;
}