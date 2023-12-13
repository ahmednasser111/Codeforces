// President's Office
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m;
	char c;
	cin >> n >> m >> c;
	char a[n][m];
	set<char> st;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] == c)
			{
				if (i > 0 && a[i - 1][j] != '.')
					st.insert(a[i - 1][j]);
				if (j > 0 && a[i][j - 1] != '.')
					st.insert(a[i][j - 1]);
				if (i < n - 1 && a[i + 1][j] != '.')
					st.insert(a[i + 1][j]);
				if (j < m - 1 && a[i][j + 1] != '.')
					st.insert(a[i][j + 1]);
			}
		}
	cout << (st.find(c) != st.end() ? st.size() - 1 : st.size());
}