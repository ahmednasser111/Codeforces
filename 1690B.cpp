// Array Decrements
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		string message = "YES";
		scanf("%d", &n);
		int a[n], b[n];

		for (int i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (int i = 0; i < n; i++)
			scanf("%d", &b[i]);

		int diff = INT_MIN;
		for (int i = 0; i < n; i++)
			diff = max(a[i] - b[i], diff);
		for (int i = 0; i < n; i++)
		{
			if (b[i] > a[i] || (a[i] - b[i] < diff && b[i]))
			{
				message = "NO";
				break;
			}
		}
		cout << message << endl;
	}
}