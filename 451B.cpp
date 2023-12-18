// Sort the Array
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, j = 0, i;
	bool f = 0;
	scanf("%d", &n);
	int a[n], b[n];
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 1; i < n; i++)
	{
		if (a[i] > a[i - 1])
		{
			if (f)
				break;
			else
				j = i;
		}
		else
			f = 1;
	}
	reverse(a + j, a + i);
	for (int k = n - 1; k > 0; k--)
		if (a[k] < a[k - 1])
		{
			cout << "no";
			return 0;
		}
	cout << "yes\n"
	     << j + 1 << ' ' << i;
}