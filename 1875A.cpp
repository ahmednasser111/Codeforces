// Jellyfish and Undertale
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int a, b, n, x;
		scanf("%d %d %d", &a, &b, &n);
		long long sum = b;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			sum += min(x, a - 1);
		}
		cout << sum << endl;
	}
}