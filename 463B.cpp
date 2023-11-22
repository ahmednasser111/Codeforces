// Caisa and Pylons
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x = 0, k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		x = max(x, k);
	}
	cout << x;
}