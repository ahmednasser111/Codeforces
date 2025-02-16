// Increase and Decrease
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x;
	long long sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);

		sum += x;
	}

	cout << ((sum % n) ? n - 1 : n);
}