// Second Order Statistics
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x;
	scanf("%d", &n);
	set<int> st;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		st.insert(x);
	}
	cout << (st.size() > 1 ? to_string(*++st.begin()) : "NO");
}