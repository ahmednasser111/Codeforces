// Cards
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	pair<int, int> a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i].first);
		a[i].second = i + 1;
	}
	sort(a, a + n);
	for (int i = 0; i < n / 2; i++)
		cout << a[i].second << " " << a[n - i - 1].second << endl;
}