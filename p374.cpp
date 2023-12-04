// Big Mod
#include <iostream>
using namespace std;
int main()
{
	long long b, p, m, c;
	while (cin >> b >> p >> m)
	{
		if (b == 0)
		{
			cout << "0\n";
			continue;
		}
		if (p == 0 || b == 1)
		{
			cout << "1\n";
			continue;
		}
		c = 1;
		while (p)
		{
			if (p & 1)
				c = (c * b) % m;
			p /= 2;
			b = (b * b) % m;
		}
		cout << c << endl;
	}
}