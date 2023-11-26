// Decoding
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	char c1, c2;
	string s;
	cin >> n >> c1;
	bool b = n % 2 == 0;
	if (b)
		cin >> c2;
	if (n > 2)
		cin >> s;
	string prefix, suffix;
	for (int i = 0; i < n - 1 - b; i += 2)
	{
		prefix += s[i];
		suffix += s[i + 1];
	}
	reverse(prefix.begin(), prefix.end());
	cout << prefix << c1;
	if (b)
		cout << c2;
	cout << suffix;
}