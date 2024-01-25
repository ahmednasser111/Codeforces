// Plus-Minus Split
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		string s;
		cin >> n >> s;
		int x = count(s.begin(), s.end(), '-'), y = n - x;
		if (y > x)
			swap(x, y);
		cout << max(x - y, 0) << endl;
	}
}