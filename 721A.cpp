// One-dimensional Japanese Crossword
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x = 0, c = 0;
	scanf("%d", &n);
	string s;
	cin >> s;
	bool f = 0;
	int a[n];
	for (int i = 0; i <= n; i++)
	{
		if (s[i] == 'B')
		{
			f = 1;
			x++;
		}
		else if (f)
		{
			a[c] = x;
			x = 0;
			f = 0;
			c++;
		}
	}
	cout << c << endl;
	for (int i = 0; i < c; i++)
		cout << a[i] << " ";
}