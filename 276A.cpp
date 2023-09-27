// Lunch Rush
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, k, f, t, ans = INT_MIN;
	scanf("%d%d", &n, &k);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d", &f, &t);
		if (t > k)
			ans = max(ans, f - (t - k));
		else
			ans = max(ans, f);
	}
	cout << ans;
}