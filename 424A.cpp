// Squats
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x;
	string s;
	cin >> n >> s;
	x = n / 2 - count(s.begin(), s.end(), 'x');
	for (int j = 0; j < abs(x); j++)
	{
		for (int i = 0; i < n; i++)
			if (x > 0 && s[i] == 'X')
			{
				s[i] = 'x';
				break;
			}
			else if (x < 0 && s[i] == 'x')
			{
				s[i] = 'X';
				break;
			}
	}
	cout << abs(x) << endl
	     << s;
}