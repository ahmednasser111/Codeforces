// Sinking Ship
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	string s1, s2;
	scanf("%d", &n);
	vector<vector<string>> v(4);
	map<string, int> m{{"rat", 0}, {"woman", 1}, {"man", 2}, {"captain", 3}};
	for (int i = 0; i < n; i++)
	{
		cin >> s1 >> s2;
		if (s2 == "child")
			s2 = "woman";
		v[m[s2]].push_back(s1);
	}
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < v[i].size(); j++)
			cout << v[i][j] << endl;
}