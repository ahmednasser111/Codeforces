// Sail
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, sx, sy, ex, ey;
	string s;
	cin >> n >> sx >> sy >> ex >> ey >> s;

	for (int i = 0; i < n; i++)
	{
		if (sx == ex && sy == ey)
		{
			cout << i;
			return 0;
		}
		if (s[i] == 'E' && sx < ex)
		{
			sx++;
		}
		else if (s[i] == 'W' && sx > ex)
		{
			sx--;
		}
		else if (s[i] == 'N' && sy < ey)
		{
			sy++;
		}
		else if (s[i] == 'S' && sy > ey)
		{
			sy--;
		}
	}

	if (sx == ex && sy == ey)
		cout << n;
	else
		cout << -1;
}