// Mahmoud and a Triangle
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, a + n);
	for (int i = 0; i < n - 2; i++)
	{
		if (a[i] + a[i + 1] > a[i + 2])
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}