// LLPS
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	char c = 'a';
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		c = max(c, s[i]);
	for (int i = 0; i < count(s.begin(), s.end(), c); i++)
		cout << c;
}