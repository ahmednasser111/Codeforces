// Easy Number Challenge
#include <bits\stdc++.h>
using namespace std;
int countDivisors(int x)
{
	int divisors = (x == 1 ? 1 : 2);
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			divisors++;
			if (i != x / i)
				divisors++;
		}
	}
	return divisors;
}
int main()
{
	int a, b, c;
	long long sum = 0;
	map<int, int> mp;
	scanf("%d%d%d", &a, &b, &c);
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			for (int k = 1; k <= c; k++)
			{
				int product = i * j * k;

				if (!mp[product])
					mp[product] = countDivisors(product);
				sum += mp[product] % 1073741824;
			}
		}
	}
	cout << sum;
}