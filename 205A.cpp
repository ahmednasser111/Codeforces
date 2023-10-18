// Little Elephant and Rozdil
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, m = INT_MAX;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		m = min(m, a[i]);
	}
	if (count(a, a + n, m) - 1)
		cout << "Still Rozdil";
	else
		cout << find(a, a + n, m) - a + 1;
}