// Circle Line
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, r, l, rs = 0, ls = 0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	scanf("%d%d", &r, &l);
	if (r > l)
		swap(r, l);
	r--;
	l--;
	for (int i = r; i < l; i++)
		rs += a[i];
	for (int i = l; i != r; i++)
		if (i == n)
			i = -1;
		else
			ls += a[i];
	cout << min(rs, ls);
}