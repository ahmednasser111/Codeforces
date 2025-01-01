// Pasha and String
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s;
	int n, x;
	cin >> s >> n;

	map<int, int> mp;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		mp[x - 1]++;
	}

	int effect = 0;
	for (int i = 0; i < s.length() / 2; i++)
	{
		effect += mp[i];
		if (effect & 1)
			swap(s[i], s[s.length() - i - 1]);
	}
	cout << s;
}