// Ostap and Grasshopper
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, k, ti, gi;
	scanf("%d%d", &n, &k);
	string s;
	cin >> s;
	ti = s.find('T'), gi = s.find('G');
	if (gi > ti)
		swap(gi, ti);
	for (int i = gi + 1; i < ti; i++)
		if (s[i] == '#' && abs(gi - i) % k == 0)
		{
			cout << "NO";
			return 0;
		}
	cout << (abs(gi - ti) % k == 0 ? "YES" : "NO");
}