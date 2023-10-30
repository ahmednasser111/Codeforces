// Alena's Schedule
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	char c;
	string s;
	for (int i = 0; i < n; i++)
	{
		cin >> c;
		s += c;
	}
	if (s.find('1') == -1)
	{
		cout << 0;
		return 0;
	}
	int ans = 0;
	for (int i = s.find('1'); i <= s.find_last_of('1'); i++)
		if (s[i] == '0' && s[i + 1] == '0')
		{
			while (s[i] != '1')
				i++;
			i--;
		}
		else
			ans++;
	cout << ans;
}