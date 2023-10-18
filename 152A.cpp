// Marks
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	string a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	set<int> st;
	for (int i = 0; i < m; i++)
	{
		char k = '0';
		for (int j = 0; j < n; j++)
			k = max(k, a[j][i]);
		for (int j = 0; j < n; j++)
			if (k == a[j][i])
				st.insert(j + 1);
	}
	cout << st.size();
}