// Postcards and photos
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int c = 1, m = 1;
	string s;
	cin >> s;
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (s[i] != s[i + 1] || m == 5)
		{
			m = 1;
			c++;
		}
		else
			m++;
	}
	cout << c;
}