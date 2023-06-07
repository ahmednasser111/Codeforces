// Love Story
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int c = 0;
		string s, str = "codeforces";
		cin >> s;
		for (int i = 0; i < 10; i++)
			c += s[i] != str[i];
		cout << c << endl;
	}
}
