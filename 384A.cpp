// Coder
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int n;
	bool f = 1;
	scanf("%d", &n);
	cout << (n & 1 ? n * (n / 2) + ceil(n / 2.0) : n * n / 2) << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << (f ? 'C' : '.');
			f = !f;
		}
		if (n % 2 == 0)
			f = !f;
		cout << '\n';
	}
}