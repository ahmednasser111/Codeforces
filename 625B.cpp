// War of the Corporations
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int n1 = s1.length(), n2 = s2.length(), c = 0;

	for (int i = 0; i <= n1 - n2; i++)
	{
		string tmp = s1.substr(i, n2);
		if (tmp == s2)
		{
			c++;
			i += n2 - 1;
		}
	}

	cout << c;
}