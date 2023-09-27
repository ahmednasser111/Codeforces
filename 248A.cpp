// cupboards
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x, l = 0, r = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		l += x;
		scanf("%d", &x);
		r += x;
	}
	cout << min(l, n - l) + min(r, n - r);
}