// Coins
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);

	while (n > 1)
	{
		cout << n << ' ';
		for (int i = 2; i <= n; i++)
		{
			if (i * i > n)
			{
				n = 1;
				break;
			}
			if (n % i == 0)
			{
				n /= i;
				break;
			}
		}
	}
	cout << 1;
}