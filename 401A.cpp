// Vanya and Cards
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x, a, sum = 0;
	scanf("%d%d", &n, &x);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	cout << ceil((float)abs(sum) / x);
}