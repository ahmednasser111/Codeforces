// Lucky Ticket
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	string s;
	cin >> s;
	for (int i = 0; i < n; i++)
		if (s[i] != '4' && s[i] != '7')
		{
			cout << "NO";
			return 0;
		}
	cout << (accumulate(s.begin(), s.begin() + n / 2, 0) - '0' == accumulate(s.begin() + n / 2, s.end(), 0) - '0' ? "YES" : "NO");
}