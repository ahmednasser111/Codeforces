// Cookies
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x, sum = 0, odd = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		sum += x;
		odd += x & 1;
	}
	cout << (sum & 1 ? odd : n - odd);
}