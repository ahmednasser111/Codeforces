// Chocolate
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, prev = -1;
	long long total = 1;
	scanf("%d", &n);
	bool b;
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		if (b)
		{
			if (prev != -1)
			{
				total *= i - prev;
			}
			prev = i;
		}
	}
	cout << (prev != -1 ? total : 0);
}