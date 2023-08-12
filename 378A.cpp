// Playing with Dice
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int a, b, x = 0, z = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i < 7; i++)
		if (abs(a - i) < abs(b - i))
			x++;
		else if (abs(a - i) > abs(b - i))
			z++;

	cout << x << " " << 6 - (x + z) << " " << z;
}