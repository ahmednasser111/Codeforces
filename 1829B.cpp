// Blank Space
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, c = 0, x, space = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			if (x == 1)
			{
				space = max(space, c);
				c = 0;
			}
			else
				c++;
		}
		cout << max(space, c) << endl;
	}
}