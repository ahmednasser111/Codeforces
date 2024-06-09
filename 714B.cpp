// Filya and Homework
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x;
	set<int> st;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		st.insert(x);
	}
	if (st.size() == 3)
	{
		vector<int> v(st.begin(), st.end());
		cout << (v[1] - v[0] == v[2] - v[1] ? "YES" : "NO");
	}
	else
		cout << (st.size() < 3 ? "YES" : "NO");
}