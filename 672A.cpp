//
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n, x = 1;
	string s;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++, x++)
	{
		s = to_string(x);
		for (int j = 0; j < s.length(); j++, i++)
		{
			if (i == n)
			{
				cout << s[j] << endl;
				return 0;
			}
		}
		i--;
	}
}