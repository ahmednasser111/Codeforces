// Queue on Bus Stop
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m, sum = 0, x, ans = 0;
	scanf("%d%d", &n, &m);
	while (n--)
	{
		scanf("%d", &x);
		sum += x;
		if (sum >= m)
		{
			ans++;
			sum = (sum == m ? 0 : x);
		}
	}
	cout << ans + (sum != 0);
}