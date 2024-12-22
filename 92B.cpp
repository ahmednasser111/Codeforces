// Binary Number
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int c = 0;
	while (s.length() > 1)
	{
		c++;
		if (s[s.length() - 1] == '0')
		{
			s.pop_back();
		}
		else
		{
			int i = s.length() - 1;
			while (i >= 0 && s[i] == '1')
			{
				s[i] = '0';
				i--;
			}
			if (i == -1)
				s = '1' + s;
			else
				s[i] = '1';
		}
	}
	cout << c;
}