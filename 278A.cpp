// Circle Line
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, r, l, rs = 0, sum = 0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	scanf("%d%d", &r, &l);
	if (r > l)
		swap(r, l);
	for (int i = r - 1; i < l - 1; i++)
		rs += a[i];

	cout << min(rs, sum - rs);
}