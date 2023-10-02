// Valera and Plates
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m, k, x;
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x == 1)
			m--;
		else
		{
			if (k < 1)
				m--;
			else
				k--;
		}
	}
	cout << abs(min(0, m) + min(0, k));
}