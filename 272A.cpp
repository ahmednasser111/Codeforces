// Dima and Friends
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, sum = 0, x, c = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		sum += x;
	}
	for (int i = 1; i <= 5; i++)
		if ((sum + i) % (n + 1) != 1)
			c++;
	cout << c;
}