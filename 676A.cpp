// Nicholas and Permutation
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x, a, b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x == 1)
			a = i;
		else if (x == n)
			b = i;
	}
	if (a > b)
		swap(a, b);
	if (a > n - b - 1)
		cout << b;
	else
		cout << n - a - 1;
}