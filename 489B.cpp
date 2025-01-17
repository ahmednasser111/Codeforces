// BerSU Ball
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, c = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++)
		cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (abs(a[i] - b[j]) < 2)
			{
				c++;
				b[j] = 102;
				break;
			}
		}
	}
	cout << c;
}