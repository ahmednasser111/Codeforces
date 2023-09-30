// Candy Bags
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n * n / 2; i += n / 2)
	{
		for (int j = i; j < n / 2 + i; j++)
			cout << j + 1 << ' ' << n * n - j << ' ';
		cout << '\n';
	}
}