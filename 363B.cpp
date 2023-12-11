// Fence
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, k, x, ans = 0;
	scanf("%d%d", &n, &k);
	long long a[n];
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		sum += x;
		a[i] = sum;
	}
	long long Min = a[k - 1];
	for (int i = 1; i <= n - k; i++)
	{
		sum = a[i + k - 1] - a[i - 1];
		if (sum < Min)
		{
			ans = i;
			Min = sum;
		}
	}
	cout << ans + 1;
}