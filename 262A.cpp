// Roma and Lucky Numbers
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, k, c, r = 0, x;
	scanf("%d%d", &n, &k);
	while (n--)
	{
		scanf("%d", &x);
		c = 0;
		while (x != 0)
		{
			c += x % 10 == 4 || x % 10 == 7;
			x /= 10;
		}
		r += c <= k;
	}
	cout << r;
}