// A Good Contest
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		string s;
		int a, b;
		cin >> s >> a >> b;
		if (b > a && a >= 2400)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}