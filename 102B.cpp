// Sum of Digits
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int c = 0, x;
	string s;
	cin >> s;
	while (s.length() > 1)
	{
		c++;
		x = 0;
		for (char ch : s)
			x += ch - '0';
		s = to_string(x);
	}
	cout << c;
}