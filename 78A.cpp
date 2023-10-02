// Haiku
#include <bits\stdc++.h>
using namespace std;
int main()
{
	string s;
	int c[3]{5, 7, 5};
	for (int i = 0; i < 3; i++)
	{
		getline(cin, s);
		if (count(s.begin(), s.end(), 'a') + count(s.begin(), s.end(), 'e') + count(s.begin(), s.end(), 'i') + count(s.begin(), s.end(), 'o') + count(s.begin(), s.end(), 'u') != c[i])
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}