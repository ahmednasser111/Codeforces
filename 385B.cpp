// Bear and Strings
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s;
	vector<int> v;
	cin >> s;
	int n = s.length(), c = 0;

	for (int i = 0; i < n - 3; i++)
		if (s.substr(i, 4) == "bear")
			v.push_back(i);

	for (int i = 0; i < n; i++)
	{
		for (int j : v)
		{
			if (j >= i)
			{
				c += n - j - 3;
				break;
			}
		}
	}
	cout << c;
}