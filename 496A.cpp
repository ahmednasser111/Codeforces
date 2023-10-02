// Minimum Difficulty
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, diff = 0, mdiff = 1000;
	scanf("%d", &n);
	int a[n];
	scanf("%d", &a[0]);
	for (int i = 1; i < n; i++)
	{
		scanf("%d", &a[i]);
		diff = max(diff, a[i] - a[i - 1]);
	}
	for (int i = 1; i < n - 1; i++)
		mdiff = min(a[i + 1] - a[i - 1], mdiff);
	cout << max(diff, mdiff);
}
