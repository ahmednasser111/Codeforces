// Bear and Finding Criminals
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, a;
	scanf("%d%d", &n, &a);
	bool t[n];
	a--;
	for (int i = 0; i < n; i++)
		scanf("%d", &t[i]);
	int c = t[a], i = 1;
	while (!(a - i < 0 && a + i >= n))
	{
		if (a - i < 0)
			c += t[a + i];
		else if (a + i >= n)
			c += t[a - i];
		else if (t[a + i] == t[a - i])
			c += t[a + i] + t[a - i];
		i++;
	}
	cout << c;
}
