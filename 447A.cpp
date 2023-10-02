// DZY Loves Hash
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int p, n, x, c;
	set<int> st;
	scanf("%d%d", &p, &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		c = st.size();
		st.insert(x % p);
		if (c == st.size())
		{
			cout << i;
			return 0;
		}
	}
	cout << -1;
}