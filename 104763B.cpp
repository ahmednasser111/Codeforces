// Jellyfish Lights
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, c1 = 0, c2 = 0;
	scanf("%d", &n);
	string s;
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		c1 += ((i & 1) + '0') != s[i];
		c2 += (!(i & 1) + '0') != s[i];
	}
	cout << min(c1, c2);
}