// Round House
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, a, b;
	scanf("%d%d%d", &n, &a, &b);
	for (int i = 0; i < abs(b); i++)
	{
		a -= b < 0;
		a += b > 0;
		if (a == 0)
			a = n;
		if (a == n + 1)
			a = 1;
	}
	cout << a;
}