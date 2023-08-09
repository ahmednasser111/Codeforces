// Cipher Shifer
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, c = 0;
		string s;
		cin >> n >> s;
		for (int i = 1; i < n; i++)
		{
			if (s[c] == s[i])
			{
				cout << s[i];
				i++;
				c = i;
			}
		}
		cout << endl;
	}
}