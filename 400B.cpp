// Inna and New Matrix of Candies
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m;
	char c;
	set<int> st;
	scanf("%d %d", &n, &m);
	int a[n][2];
	for (int i = 0; i < n; i++)
	{
		a[i][0] = a[i][1] = -1;
		for (int j = 0; j < m; j++)
		{
			cin >> c;
			if (c == 'G')
				a[i][0] = j;
			else if (c == 'S')
			{
				a[i][1] = j;
				if (a[i][0] == -1)
				{
					cout << -1;
					return 0;
				}
				st.insert(a[i][1] - a[i][0]);
			}
		}
	}
	cout << st.size();
}