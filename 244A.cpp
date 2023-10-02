// Dividing Orange
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	int a[k];
	vector<int> v;

	for (int i = 0; i < k * n; i++)
		v.push_back(i + 1);
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &a[i]);
		v.erase(remove(v.begin(), v.end(), a[i]), v.end());
	}
	for (int i = 0; i < k; i++)
	{
		cout << a[i] << ' ';
		for (int j = 0; j < n - 1; j++)
		{
			cout << v[0] << ' ';
			v.erase(v.begin());
		}
		cout << '\n';
	}
}