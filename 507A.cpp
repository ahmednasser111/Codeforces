// Amr and Music
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	pair<int, int> a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i].first);
		a[i].second = i + 1;
	}
	sort(a, a + n);
	int i = 0;
	vector<int> v;
	while (k >= a[i].first && i < n)
	{
		k -= a[i].first;
		v.push_back(a[i].second);
		i++;
	}
	cout << v.size() << endl;
	for (int &i : v)
		cout << i << ' ';
}