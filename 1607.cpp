// Taxi
#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	while (a < c)
	{
		a += b;
		a = min(a, c);
		c -= d;
	}
	cout << a;
}