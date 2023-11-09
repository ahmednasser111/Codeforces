// Autocomplete
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s, str;
	int n;
	cin >> s >> n;
	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str.find(s) == 0)
			v.push_back(str);
	}
	cout << (v.size() > 0 ? *min_element(v.begin(), v.end()) : s);
}