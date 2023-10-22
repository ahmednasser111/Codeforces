// Business trip
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int k, c = 0, a[12];
	scanf("%d", &k);
	for (int i = 0; i < 12; i++)
		scanf("%d", &a[i]);
	sort(a, a + 12);
	for (int i = 11; i >= 0; i--)
	{
		if (c >= k)
		{
			cout << 11 - i;
			return 0;
		}
		c += a[i];
	}
	cout << (c < k ? -1 : 12);
}