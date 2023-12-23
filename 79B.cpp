// Colorful Field
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m, k, t, x, y, c, j;
	scanf("%d%d%d%d", &n, &m, &k, &t);
	int waste[k];
	string ans[3] = {"Grapes", "Carrots", "Kiwis"};
	for (int i = 0; i < k; i++)
	{
		scanf("%d%d", &x, &y);
		waste[i] = (x - 1) * m + y;
	}
	sort(waste, waste + k);
	for (int i = 0; i < t; i++)
	{
		bool b = 1;
		scanf("%d%d", &x, &y);
		c = (x - 1) * m + y;
		j = lower_bound(waste, waste + k, c) - waste;
		if (waste[j] == c)
			cout << "Waste\n";
		else
			cout << ans[(c - j) % 3] << endl;
	}
}