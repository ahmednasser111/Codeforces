// Road Construction
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m, x;
	set<int> st;
	scanf("%d%d", &n, &m);

	for (int i = 0; i < m * 2; i++)
	{
		scanf("%d", &x);
		st.insert(x);
	}
	int i = 1;
	for (; i <= n; i++)
	{
		if (st.find(i) == st.end())
			break;
	}
	cout << n - 1 << endl;
	for (int j = 1; j <= n; j++)
	{
		if (j == i)
			continue;

		cout << i << ' ' << j << endl;
	}
}