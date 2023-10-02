// Collecting Beats is Fun
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int k;
	char x;
	scanf("%d", &k);
	int a[9]{0};
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			cin >> x;
			if (x != '.')
				a[x - 1 - '0']++;
		}
	for (int i = 0; i < 9; i++)
		if (a[i] > 2 * k)
		{
			cout << "NO";
			return 0;
		}
	cout << "YES";
}