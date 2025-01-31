// Berland National Library
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, c = 0, x, res = 0;
	char ch;
	cin >> n;

	set<int> st;

	for (int i = 0; i < n; i++)
	{
		cin >> ch >> x;
		if (ch == '+')
		{
			c++;
			st.insert(x);
		}
		else
		{
			if (st.find(x) != st.end())
			{
				c--;
				st.erase(x);
			}
			else
				res++;
		}
		res = max(c, res);
	}
	cout << res;
}