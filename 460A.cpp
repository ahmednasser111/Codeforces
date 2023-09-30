// Vasya and Socks
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		if (i % m == 0)
			n++;
	cout << n;
}