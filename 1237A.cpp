// Balanced Rating Changes
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n, x;
	cin >> n;
	int b = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x % 2 == 0)
			cout << x / 2 << '\n';
		else
		{
			cout << (x + b) / 2 << '\n';
			b *= -1;
		}
	}
}
