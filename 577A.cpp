// Multiplication Table
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x, c = 0;
	scanf("%d%d", &n, &x);
	for (int i = 1; i <= n; i++)
		if (x % i == 0 && x / i <= n)
			c++;
	cout << c;
}