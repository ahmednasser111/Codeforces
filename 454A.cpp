// Little Pony and Crystal Mine
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < (n - x) / 2; j++)
			cout << '*';
		for (int j = 0; j < x; j++)
			cout << 'D';
		for (int j = 0; j < (n - x) / 2; j++)
			cout << '*';
		if (i + 1 > n / 2)
			x -= 2;
		else
			x += 2;
		cout << '\n';
	}
}